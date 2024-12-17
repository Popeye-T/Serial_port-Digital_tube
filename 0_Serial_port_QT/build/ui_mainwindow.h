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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
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
    QLabel *label_8;
    QTextEdit *data_send;
    QCheckBox *checkBox;
    QPushButton *message_send_btn;
    QPushButton *on_message_send_clean_btn_clicked;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QSpinBox *user_freq_set_2;
    QLabel *label_12;
    QLabel *local_time;
    QSpinBox *user_freq_set_1;
    QPushButton *local_time_freq_btn;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QTimeEdit *timeEdit;
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
        number_send_btn->setGeometry(QRect(470, 260, 51, 91));
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
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 60, 251, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(16);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        label_8->setFont(font2);
        label_8->setWordWrap(true);
        data_send = new QTextEdit(centralwidget);
        data_send->setObjectName("data_send");
        data_send->setGeometry(QRect(20, 390, 501, 61));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 300, 251, 19));
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        message_send_btn = new QPushButton(centralwidget);
        message_send_btn->setObjectName("message_send_btn");
        message_send_btn->setGeometry(QRect(400, 390, 120, 30));
        message_send_btn->setFont(font1);
        on_message_send_clean_btn_clicked = new QPushButton(centralwidget);
        on_message_send_clean_btn_clicked->setObjectName("on_message_send_clean_btn_clicked");
        on_message_send_clean_btn_clicked->setGeometry(QRect(400, 420, 120, 30));
        on_message_send_clean_btn_clicked->setFont(font1);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 340, 501, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font3.setPointSize(11);
        font3.setHintingPreference(QFont::PreferDefaultHinting);
        label_10->setFont(font3);
        label_10->setWordWrap(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 140, 251, 30));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_9->setWordWrap(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(270, 220, 251, 30));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_11->setWordWrap(true);
        user_freq_set_2 = new QSpinBox(centralwidget);
        user_freq_set_2->setObjectName("user_freq_set_2");
        user_freq_set_2->setGeometry(QRect(340, 310, 121, 41));
        user_freq_set_2->setAlignment(Qt::AlignCenter);
        user_freq_set_2->setMaximum(500000000);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 330, 161, 21));
        label_12->setFont(font3);
        label_12->setWordWrap(true);
        local_time = new QLabel(centralwidget);
        local_time->setObjectName("local_time");
        local_time->setGeometry(QRect(250, 100, 281, 30));
        local_time->setFont(font2);
        local_time->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        local_time->setAlignment(Qt::AlignCenter);
        local_time->setWordWrap(true);
        user_freq_set_1 = new QSpinBox(centralwidget);
        user_freq_set_1->setObjectName("user_freq_set_1");
        user_freq_set_1->setGeometry(QRect(340, 170, 121, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(user_freq_set_1->sizePolicy().hasHeightForWidth());
        user_freq_set_1->setSizePolicy(sizePolicy);
        user_freq_set_1->setAlignment(Qt::AlignCenter);
        user_freq_set_1->setMaximum(500000000);
        local_time_freq_btn = new QPushButton(centralwidget);
        local_time_freq_btn->setObjectName("local_time_freq_btn");
        local_time_freq_btn->setGeometry(QRect(470, 170, 51, 41));
        local_time_freq_btn->setFont(font1);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(290, 170, 51, 41));
        label_13->setFont(font2);
        label_13->setWordWrap(true);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(290, 310, 51, 41));
        label_14->setFont(font2);
        label_14->setWordWrap(true);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(290, 260, 51, 41));
        label_15->setFont(font2);
        label_15->setWordWrap(true);
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(340, 260, 121, 41));
        timeEdit->setAlignment(Qt::AlignCenter);
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
        label_8->raise();
        checkBox->raise();
        message_send_btn->raise();
        on_message_send_clean_btn_clicked->raise();
        label_10->raise();
        label_9->raise();
        label_11->raise();
        user_freq_set_2->raise();
        label_12->raise();
        local_time->raise();
        user_freq_set_1->raise();
        local_time_freq_btn->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        timeEdit->raise();
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
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\271\264-\346\234\210-\346\227\245  \346\227\266:\345\210\206:\347\247\222:\346\257\253\347\247\222", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "3-\345\244\207\347\224\250\351\200\211\351\241\271\357\274\23216\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        message_send_btn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        on_message_send_clean_btn_clicked->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\345\211\215\351\235\242FFFF\344\270\272\345\270\247\345\244\264\357\274\21450 23 10 0f\357\274\214\345\216\273\346\216\211f\345\211\251\344\275\231\346\225\260\346\215\256\344\270\272\346\227\266\351\227\264\357\274\214\344\270\244\344\275\215\345\210\206\351\222\237\357\274\214\344\270\244\344\275\215\347\247\222\357\274\214\344\270\211\344\275\215\346\257\253\347\247\222\343\200\202\345\220\216\351\235\2426\344\275\215\344\270\272\350\256\241\346\225\260\351\242\221\347\216\207\343\200\202", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "1-\345\217\221\351\200\201\346\234\254\345\234\260\346\227\266\351\227\264\345\217\212\351\242\221\347\216\207", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "2-\345\217\221\351\200\201\350\207\252\345\256\232\344\271\211\346\227\266\351\227\264\345\217\212\351\242\221\347\216\207", nullptr));
#if QT_CONFIG(tooltip)
        user_freq_set_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\344\270\213\346\211\213\345\212\250\350\276\223\345\205\245\345\217\221\351\200\201", nullptr));
        local_time->setText(QCoreApplication::translate("MainWindow", "Local-time", nullptr));
#if QT_CONFIG(tooltip)
        user_freq_set_1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        local_time_freq_btn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\351\242\221\347\216\207", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\351\242\221\347\216\207", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "mm:ss.zzz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
