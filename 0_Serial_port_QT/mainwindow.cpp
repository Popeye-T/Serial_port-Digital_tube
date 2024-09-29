#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/img/daitou.ico"));//设置图标
    ui->serial_toggle->setEnabled(false);

    connect(serial, &QSerialPort::readyRead, this, &MainWindow::data_recv);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_serial_scan_clicked()
{
    ui->serial_name->clear(); // 清除当前的串口名列表

    QSerialPort _com; // 在循环外部创建 QSerialPort 对象，避免重复构造和析构

    // 遍历所有可用的串口
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        _com.setPort(info); // 设置当前的端口信息

        QListWidget listWidget;
        QString portDescription = info.description();
        QString portName = info.portName();
        QString itemText;

        itemText = QString("%1-%2").arg(portName, portDescription);
        // if (portDescription.contains("蓝牙", Qt::CaseInsensitive)) {
        //     itemText = QString("%1-%2").arg(portName, portDescription);
        // } else {
        //     itemText = QString("%1-%2").arg(portName, portDescription);
        // }

        ui->serial_name->addItem(itemText); // 将串口名添加到界面上
    }

}

void MainWindow::on_open_serial_port_clicked()
{
    if(!serial->isOpen()){
        //把串口名+描述信息提取出来，然后分割作为COM设定
        QString portname_split = ui->serial_name->currentText();
        QString extractedPortName = portname_split.split('-').first();
        serial->setPortName(extractedPortName);
        //设置波特率
        serial->setBaudRate(ui->serial_baudrate->currentText().toLong());
        //设置停止位
        switch(ui->serial_stopbit->currentIndex()){
        case 0:serial->setStopBits(QSerialPort::OneStop);break;
        case 1:serial->setStopBits(QSerialPort::OneAndHalfStop);break;
        case 2:serial->setStopBits(QSerialPort::TwoStop);break;
        }
        //设置数据位
        switch(ui->serial_databit->currentIndex()){
        case 0:serial->setDataBits(QSerialPort::Data8);break;
        case 1:serial->setDataBits(QSerialPort::Data7);break;
        case 2:serial->setDataBits(QSerialPort::Data6);break;
        case 3:serial->setDataBits(QSerialPort::Data5);break;
        }
        //设置校验位
        switch(ui->serial_parity->currentIndex()){
        case 0:serial->setParity(QSerialPort::NoParity);break;
        case 1:serial->setParity(QSerialPort::OddParity);break;
        case 2:serial->setParity(QSerialPort::EvenParity);break;
        }
        //设置开关
        serial->open(QIODevice::ReadWrite);
        ui->serial_toggle->setChecked(true);
        ui->open_serial_port->setText("关闭串口");
    }
    else{
        //设置开关
        serial->close();
        ui->serial_toggle->setChecked(false);
        ui->open_serial_port->setText("打开串口");
    }
}


void MainWindow::on_message_send_btn_clicked()
{
    if (ui->checkBox->isChecked()) {
        sendHexData();
    } else {
        sendPlainData();
    }
}

bool MainWindow::isSerialOpen()
{
    return serial->isOpen();
}

void MainWindow::sendHexData()
{
    QString str = ui->data_send->toPlainText();
    QStringList list = str.split("\n");
    QByteArray hexData;
    QString temp;

    for (int i = 0; i < list.size(); i++) {
        if (list[i].isEmpty())
            continue;

        for (QChar c : list[i]) {
            if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
                temp.append(c);
                if (temp.length() == 2) {
                    bool ok;
                    char byte = static_cast<char>(temp.mid(0, 2).toUInt(&ok, 16));
                    if (ok) {
                        hexData.append(byte);
                    }
                    temp.clear();
                }
            }
        }
        if (!hexData.isEmpty()) {
            try {
                serial->write(hexData);
            } catch (...) {
                qDebug() << "发送十六进制数据时出现错误。";
            }
            hexData.clear();
        }
    }
}

void MainWindow::sendPlainData()
{
    QString str = ui->data_send->toPlainText();
    QStringList list = str.split("\n");

    for (int i = 0; i < list.size(); i++) {
        if (list[i].isEmpty())
            continue;
        else {
            list[i] += "";
            try {
                serial->write(list[i].toLocal8Bit());
            } catch (...) {
                qDebug() << "发送普通数据时出现错误。";
            }
        }
    }
}


// void MainWindow::on_message_send_btn_clicked()
// {
//     if(serial->isOpen()){
//         QString str = ui->data_send->toPlainText();
//         QStringList list = str.split("\n");
//         for(int i = 0; i < list.size(); i++){
//             if(list[i].isEmpty())
//                 continue;
//             else{
//                 QByteArray asciiData;
//                 for (QChar c : list[i]) {
//                     asciiData.append(static_cast<char>(c.toLatin1())); // 转换每个字符为ASCII
//                 }
//                 serial->write(asciiData);
//             }
//         }
//     }
//     else{
//         return;
//     }
// }


void MainWindow::data_recv(){
    QByteArray buffer = serial->readAll();
    QString string = "";
    string += tr(buffer);
    ui->data_recv->insertPlainText(string);
    ui->data_recv->moveCursor(QTextCursor::End);
}

void MainWindow::data_recv_hex()
{
    QByteArray buffer = serial->readAll();
    QString hexDisplay = "";
    for (char byte : buffer) {
        hexDisplay += QString("%1 ").arg(static_cast<quint8>(byte), 2, 16, QLatin1Char('0'));
    }
    ui->data_recv->insertPlainText(hexDisplay);
    ui->data_recv->moveCursor(QTextCursor::End);
}

void MainWindow::on_number_send_btn_clicked()
{
    if (serial->isOpen()) {
        // 从 QSpinBox 获取数值
        int spinBoxValue = ui->spinBox->value();
        QString hexValue = QString::number(spinBoxValue, 16);

        // 判断十六进制值长度是否小于 8（32 位为 8 个十六进制字符）
        if (hexValue.length() < 8) {
            QString padding(8 - hexValue.length(), '0');
            hexValue = padding + hexValue;
        }

        // 构建要发送的十六进制数据
        QByteArray data;
        data.append(char(0xFF));
        data.append(char(0xFF));
        for (int i = 0; i < hexValue.length(); i += 2) {
            bool ok;
            int byteValue = hexValue.mid(i, 2).toInt(&ok, 16);
            if (ok) {
                data.append(char(byteValue));
            }
        }
        // data.append(char(0x00));
        // data.append(char(0x00));

        serial->write(data);
    } else {
        return;
    }
}


void MainWindow::on_message_recv_clean_btn_clicked()
{
    ui->data_recv->clear();
}


void MainWindow::on_on_message_send_clean_btn_clicked_clicked()
{
    ui->data_send->clear();
}

void MainWindow::on_checkBox_recv_clicked()
{
    status = ui->checkBox_recv->isChecked();
    // 断开之前可能的连接
    disconnect(serial, &QSerialPort::readyRead, this, nullptr);
    if (!status) {
        // 尝试连接并检查连接是否成功
        if (connect(serial, &QSerialPort::readyRead, this, &MainWindow::data_recv)) {
            qDebug() << "Connected to data_recv successfully.";
        } else {
            qDebug() << "Failed to connect to data_recv.";
        }
    } else {
        // 尝试连接并检查连接是否成功
        if (connect(serial, &QSerialPort::readyRead, this, &MainWindow::data_recv_hex)) {
            qDebug() << "Connected to data_recv_hex successfully.";
        } else {
            qDebug() << "Failed to connect to data_recv_hex.";
        }
    }
}
