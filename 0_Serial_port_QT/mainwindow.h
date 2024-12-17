#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QTimer>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QSerialPort *serial = new QSerialPort;

private slots:
    void on_open_serial_port_clicked();

    void on_message_send_btn_clicked();

    void on_serial_scan_clicked();

    void on_number_send_btn_clicked();

    void on_on_message_send_clean_btn_clicked_clicked();

    bool isSerialOpen();

    void sendHexData();

    void sendPlainData();

    void updateDateTime();

    void on_local_time_freq_btn_clicked();

private:
    Ui::MainWindow *ui;
    bool status; // 声明为全局变量
    QTimer *timer; // 定时器用于更新时间
};
#endif // MAINWINDOW_H
