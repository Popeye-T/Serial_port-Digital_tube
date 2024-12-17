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

    // 初始化定时器
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateDateTime);
    timer->start(100); // 每100毫秒更新一次
    updateDateTime(); // 立即显示时间
}

MainWindow::~MainWindow()
{
    delete timer; // 释放定时器
    delete ui;
}

void MainWindow::updateDateTime()
{
    QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss.zzz");
    ui->local_time->setText(currentTime); // 将时间显示在状态栏
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


void MainWindow::on_number_send_btn_clicked()
{
    // 从 QSpinBox 获取数值
    int spinBoxValue = ui->user_freq_set_2->value();
    QString hexValue = QString::number(spinBoxValue, 16);

    // 判断十六进制值长度是否小于 6（32 位为 8 个十六进制字符）
    if (hexValue.length() < 6) {
        QString padding(6 - hexValue.length(), '0');
        hexValue = padding + hexValue;
    }

    // 获取 QTimeEdit 中的时间
    QTime currentTime = ui->timeEdit->time();

    // 获取分钟、秒钟和毫秒
    int minute = currentTime.minute();
    int second = currentTime.second();
    int msec = currentTime.msec();

    // 解析分钟和秒钟的十位和个位
    unsigned char minuteTens = (minute / 10) & 0x0F;  // 十位，取低四位
    unsigned char minuteOnes = (minute % 10) & 0x0F;  // 个位，取低四位
    unsigned char secondTens = (second / 10) & 0x0F;  // 十位，取低四位
    unsigned char secondOnes = (second % 10) & 0x0F;  // 个位，取低四位
    // 解析毫秒的百位、十位和个位
    unsigned char msecHundreds = (msec / 100) & 0x0F;  // 百位
    unsigned char msecTens = ((msec % 100) / 10) & 0x0F; // 十位
    unsigned char msecOnes = (msec % 10) & 0x0F;  // 个位

    // 拼接分钟和秒钟的十位和个位为8位数据
    unsigned char minuteData = (minuteTens << 4) | minuteOnes; // 高4位是十位，低4位是个位
    unsigned char secondData = (secondTens << 4) | secondOnes; // 高4位是十位，低4位是个位
    // 拼接毫秒的百位和十位为8位数据
    unsigned char msecData1 = (msecHundreds << 4) | msecTens;  // 高4位是百位，低4位是十位
    // 拼接毫秒的个位和F为8位数据
    unsigned char msecData2 = (msecOnes << 4) | 0x0F;  // 高4位是F，低4位是个位

    // 构建要发送的数据
    QByteArray data;
    data.append(char(0xFF)); // 添加第一个 FF
    data.append(char(0xFF)); // 添加第二个 FF
    data.append(minuteData); // 添加分钟数据（8位）
    data.append(secondData); // 添加秒钟数据（8位）
    data.append(msecData1); // 添加分钟数据（8位）
    data.append(msecData2); // 添加秒钟数据（8位）

    for (int i = 0; i < hexValue.length(); i += 2) {
        bool ok;
        int byteValue = hexValue.mid(i, 2).toInt(&ok, 16);
        if (ok) {
            data.append(char(byteValue));
        }
    }

    // 检查串口是否打开并发送数据
    if (serial->isOpen()) {
        serial->write(data); // 发送数据
        qDebug() << "已发送数据：" << data.toHex().toUpper(); // 打印发送的十六进制数据
    } else {
        qDebug() << "串口未打开，无法发送数据！";
    }
}


void MainWindow::on_on_message_send_clean_btn_clicked_clicked()
{
    ui->data_send->clear();
}

void MainWindow::on_local_time_freq_btn_clicked()
{
    // 从 QSpinBox 获取数值
    int spinBoxValue = ui->user_freq_set_1->value();
    QString hexValue = QString::number(spinBoxValue, 16);

    // 判断十六进制值长度是否小于 6（32 位为 8 个十六进制字符）
    if (hexValue.length() < 6) {
        QString padding(6 - hexValue.length(), '0');
        hexValue = padding + hexValue;
    }

    // 获取当前时间
    QTime currentTime = QTime::currentTime();

    // 获取分钟和秒钟
    int minute = currentTime.minute();
    int second = currentTime.second();

    // 解析分钟和秒钟的十位和个位
    unsigned char minuteTens = (minute / 10) & 0x0F;  // 十位，取低四位
    unsigned char minuteOnes = (minute % 10) & 0x0F;  // 个位，取低四位
    unsigned char secondTens = (second / 10) & 0x0F;  // 十位，取低四位
    unsigned char secondOnes = (second % 10) & 0x0F;  // 个位，取低四位

    // 拼接分钟和秒钟的十位和个位为8位数据
    unsigned char minuteData = (minuteTens << 4) | minuteOnes; // 高4位是十位，低4位是个位
    unsigned char secondData = (secondTens << 4) | secondOnes; // 高4位是十位，低4位是个位

    // 构建要发送的数据
    QByteArray data;
    data.append(char(0xFF)); // 添加第一个 FF
    data.append(char(0xFF)); // 添加第二个 FF
    data.append(minuteData); // 添加分钟数据（8位）
    data.append(secondData); // 添加秒钟数据（8位）
    data.append(char(0x00)); // 添加第二个 FF
    data.append(char(0x0F)); // 添加第二个 FF

    for (int i = 0; i < hexValue.length(); i += 2) {
        bool ok;
        int byteValue = hexValue.mid(i, 2).toInt(&ok, 16);
        if (ok) {
            data.append(char(byteValue));
        }
    }

    // 检查串口是否打开并发送数据
    if (serial->isOpen()) {
        serial->write(data); // 发送数据
        qDebug() << "已发送数据：" << data.toHex().toUpper(); // 打印发送的十六进制数据
    } else {
        qDebug() << "串口未打开，无法发送数据！";
    }
}



