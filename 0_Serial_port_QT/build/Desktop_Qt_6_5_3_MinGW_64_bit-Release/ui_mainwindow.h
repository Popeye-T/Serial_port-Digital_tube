/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QComboBox *serial_name;
    QComboBox *serial_baudrate;
    QLabel *label_2;
    QComboBox *serial_parity;
    QLabel *label_3;
    QComboBox *serial_stopbit;
    QLabel *label_4;
    QComboBox *serial_databit;
    QLabel *label_5;
    QPushButton *serial_scan;
    QPushButton *open_serial_port;
    QPushButton *number_send_btn;
    QRadioButton *serial_toggle;
    QSpinBox *spinBox;
    QLabel *label_8;
    QTextEdit *data_send;
    QCheckBox *checkBox;
    QPushButton *message_send_btn;
    QTextBrowser *data_recv;
    QPushButton *message_recv_clean_btn;
    QPushButton *on_message_send_clean_btn_clicked;
    QCheckBox *checkBox_recv;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(562, 499);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 120, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(15);
        label->setFont(font1);
        serial_name = new QComboBox(centralwidget);
        serial_name->setObjectName("serial_name");
        serial_name->setGeometry(QRect(120, 10, 401, 30));
        serial_name->setFont(font1);
        serial_name->setEditable(true);
        serial_baudrate = new QComboBox(centralwidget);
        serial_baudrate->addItem(QString());
        serial_baudrate->addItem(QString());
        serial_baudrate->setObjectName("serial_baudrate");
        serial_baudrate->setGeometry(QRect(120, 60, 120, 30));
        serial_baudrate->setFont(font1);
        serial_baudrate->setEditable(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 120, 30));
        label_2->setFont(font1);
        serial_parity = new QComboBox(centralwidget);
        serial_parity->addItem(QString());
        serial_parity->addItem(QString());
        serial_parity->addItem(QString());
        serial_parity->setObjectName("serial_parity");
        serial_parity->setGeometry(QRect(120, 210, 120, 30));
        serial_parity->setFont(font1);
        serial_parity->setEditable(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 210, 120, 30));
        label_3->setFont(font1);
        serial_stopbit = new QComboBox(centralwidget);
        serial_stopbit->addItem(QString());
        serial_stopbit->addItem(QString());
        serial_stopbit->addItem(QString());
        serial_stopbit->setObjectName("serial_stopbit");
        serial_stopbit->setGeometry(QRect(120, 160, 120, 30));
        serial_stopbit->setFont(font1);
        serial_stopbit->setEditable(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 160, 120, 30));
        label_4->setFont(font1);
        serial_databit = new QComboBox(centralwidget);
        serial_databit->addItem(QString());
        serial_databit->addItem(QString());
        serial_databit->addItem(QString());
        serial_databit->addItem(QString());
        serial_databit->setObjectName("serial_databit");
        serial_databit->setGeometry(QRect(120, 110, 120, 30));
        serial_databit->setFont(font1);
        serial_databit->setEditable(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 110, 120, 30));
        label_5->setFont(font1);
        serial_scan = new QPushButton(centralwidget);
        serial_scan->setObjectName("serial_scan");
        serial_scan->setGeometry(QRect(20, 260, 120, 30));
        serial_scan->setFont(font1);
        open_serial_port = new QPushButton(centralwidget);
        open_serial_port->setObjectName("open_serial_port");
        open_serial_port->setGeometry(QRect(170, 260, 120, 30));
        open_serial_port->setFont(font1);
        number_send_btn = new QPushButton(centralwidget);
        number_send_btn->setObjectName("number_send_btn");
        number_send_btn->setGeometry(QRect(410, 420, 120, 30));
        number_send_btn->setFont(font1);
        serial_toggle = new QRadioButton(centralwidget);
        serial_toggle->setObjectName("serial_toggle");
        serial_toggle->setGeometry(QRect(140, 260, 31, 30));
        serial_toggle->setFont(font1);
        serial_toggle->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{\n"
"    width:30px;\n"
"    height:30px;\n"
"}\n"
""));
        serial_toggle->setIconSize(QSize(32, 32));
        serial_toggle->setCheckable(true);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(310, 360, 221, 51));
        spinBox->setMaximum(50000000);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(310, 250, 261, 111));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(12);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        label_8->setFont(font2);
        label_8->setWordWrap(true);
        data_send = new QTextEdit(centralwidget);
        data_send->setObjectName("data_send");
        data_send->setGeometry(QRect(20, 360, 271, 91));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 320, 161, 19));
        checkBox->setFont(font1);
        message_send_btn = new QPushButton(centralwidget);
        message_send_btn->setObjectName("message_send_btn");
        message_send_btn->setGeometry(QRect(170, 390, 120, 30));
        message_send_btn->setFont(font1);
        data_recv = new QTextBrowser(centralwidget);
        data_recv->setObjectName("data_recv");
        data_recv->setGeometry(QRect(260, 90, 261, 151));
        message_recv_clean_btn = new QPushButton(centralwidget);
        message_recv_clean_btn->setObjectName("message_recv_clean_btn");
        message_recv_clean_btn->setGeometry(QRect(390, 200, 120, 30));
        message_recv_clean_btn->setFont(font1);
        on_message_send_clean_btn_clicked = new QPushButton(centralwidget);
        on_message_send_clean_btn_clicked->setObjectName("on_message_send_clean_btn_clicked");
        on_message_send_clean_btn_clicked->setGeometry(QRect(170, 420, 120, 30));
        on_message_send_clean_btn_clicked->setFont(font1);
        checkBox_recv = new QCheckBox(centralwidget);
        checkBox_recv->setObjectName("checkBox_recv");
        checkBox_recv->setEnabled(true);
        checkBox_recv->setGeometry(QRect(390, 60, 121, 31));
        checkBox_recv->setFont(font1);
        checkBox_recv->setTristate(false);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(260, 60, 91, 31));
        label_9->setFont(font1);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 340, 301, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font3.setPointSize(11);
        font3.setHintingPreference(QFont::PreferDefaultHinting);
        label_10->setFont(font3);
        label_10->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        data_send->raise();
        label->raise();
        serial_name->raise();
        serial_baudrate->raise();
        label_2->raise();
        serial_parity->raise();
        label_3->raise();
        serial_stopbit->raise();
        label_4->raise();
        serial_databit->raise();
        label_5->raise();
        serial_scan->raise();
        open_serial_port->raise();
        number_send_btn->raise();
        serial_toggle->raise();
        spinBox->raise();
        label_8->raise();
        checkBox->raise();
        message_send_btn->raise();
        data_recv->raise();
        message_recv_clean_btn->raise();
        on_message_send_clean_btn_clicked->raise();
        checkBox_recv->raise();
        label_9->raise();
        label_10->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 562, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Counter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\220\215\357\274\232", nullptr));
        serial_baudrate->setItemText(0, QCoreApplication::translate("MainWindow", "115200", nullptr));
        serial_baudrate->setItemText(1, QCoreApplication::translate("MainWindow", "9600", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        serial_parity->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        serial_parity->setItemText(1, QCoreApplication::translate("MainWindow", "Odd", nullptr));
        serial_parity->setItemText(2, QCoreApplication::translate("MainWindow", "Even", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        serial_stopbit->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        serial_stopbit->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        serial_stopbit->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        serial_databit->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        serial_databit->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        serial_databit->setItemText(2, QCoreApplication::translate("MainWindow", "6", nullptr));
        serial_databit->setItemText(3, QCoreApplication::translate("MainWindow", "5", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        serial_scan->setText(QCoreApplication::translate("MainWindow", "\346\211\253\346\217\217\344\270\262\345\217\243", nullptr));
        open_serial_port->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        number_send_btn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        serial_toggle->setText(QString());
#if QT_CONFIG(tooltip)
        spinBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\276\205\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232\n"
"\346\225\260\346\215\256\345\214\205=16bit\345\270\247\345\244\264+32bit\346\225\260\346\215\256\n"
"\342\221\240-\345\270\247\345\244\264FFFF\n"
"\342\221\241-32bit\346\225\260\346\215\256\357\274\214\344\275\216\344\275\215\344\270\272\345\276\205\345\217\221\351\200\201\346\225\260\346\215\256\357\274\214\351\253\230\344\275\215\345\241\253\345\205\2050\n"
"\342\221\24210->16\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        message_send_btn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        message_recv_clean_btn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        on_message_send_clean_btn_clicked->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        checkBox_recv->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\216\245\346\224\266", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\216\245\346\224\266\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\345\244\207\347\224\250\351\200\211\351\241\271\357\274\23216\350\277\233\345\210\266\344\270\213\346\211\213\345\212\250\345\212\240\345\270\247\345\244\264\345\222\2144bit0\345\241\253\345\205\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
