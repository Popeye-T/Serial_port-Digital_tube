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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
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
    QFrame *line;
    QFrame *line_2;
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
    QTextEdit *textEdit;
    QPushButton *message_send_btn;
    QPushButton *message_send_clean_btn;
    QTextBrowser *textBrowser;
    QPushButton *message_recv_clean_btn;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *serial_toggle;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 350, 801, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(340, 0, 20, 361));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 120, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(15);
        label->setFont(font);
        serial_name = new QComboBox(centralwidget);
        serial_name->setObjectName("serial_name");
        serial_name->setGeometry(QRect(150, 20, 120, 30));
        serial_name->setFont(font);
        serial_name->setEditable(true);
        serial_baudrate = new QComboBox(centralwidget);
        serial_baudrate->addItem(QString());
        serial_baudrate->addItem(QString());
        serial_baudrate->setObjectName("serial_baudrate");
        serial_baudrate->setGeometry(QRect(150, 70, 120, 30));
        serial_baudrate->setFont(font);
        serial_baudrate->setEditable(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 70, 120, 30));
        label_2->setFont(font);
        serial_parity = new QComboBox(centralwidget);
        serial_parity->addItem(QString());
        serial_parity->addItem(QString());
        serial_parity->addItem(QString());
        serial_parity->setObjectName("serial_parity");
        serial_parity->setGeometry(QRect(150, 220, 120, 30));
        serial_parity->setFont(font);
        serial_parity->setEditable(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 220, 120, 30));
        label_3->setFont(font);
        serial_stopbit = new QComboBox(centralwidget);
        serial_stopbit->addItem(QString());
        serial_stopbit->addItem(QString());
        serial_stopbit->addItem(QString());
        serial_stopbit->setObjectName("serial_stopbit");
        serial_stopbit->setGeometry(QRect(150, 170, 120, 30));
        serial_stopbit->setFont(font);
        serial_stopbit->setEditable(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 170, 120, 30));
        label_4->setFont(font);
        serial_databit = new QComboBox(centralwidget);
        serial_databit->addItem(QString());
        serial_databit->addItem(QString());
        serial_databit->addItem(QString());
        serial_databit->addItem(QString());
        serial_databit->setObjectName("serial_databit");
        serial_databit->setGeometry(QRect(150, 120, 120, 30));
        serial_databit->setFont(font);
        serial_databit->setEditable(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 120, 120, 30));
        label_5->setFont(font);
        serial_scan = new QPushButton(centralwidget);
        serial_scan->setObjectName("serial_scan");
        serial_scan->setGeometry(QRect(50, 270, 120, 30));
        serial_scan->setFont(font);
        open_serial_port = new QPushButton(centralwidget);
        open_serial_port->setObjectName("open_serial_port");
        open_serial_port->setGeometry(QRect(50, 320, 120, 30));
        open_serial_port->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 390, 221, 151));
        message_send_btn = new QPushButton(centralwidget);
        message_send_btn->setObjectName("message_send_btn");
        message_send_btn->setGeometry(QRect(650, 390, 120, 30));
        message_send_btn->setFont(font);
        message_send_clean_btn = new QPushButton(centralwidget);
        message_send_clean_btn->setObjectName("message_send_clean_btn");
        message_send_clean_btn->setGeometry(QRect(650, 510, 120, 30));
        message_send_clean_btn->setFont(font);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(380, 10, 391, 291));
        message_recv_clean_btn = new QPushButton(centralwidget);
        message_recv_clean_btn->setObjectName("message_recv_clean_btn");
        message_recv_clean_btn->setGeometry(QRect(650, 320, 120, 30));
        message_recv_clean_btn->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, 320, 120, 30));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(650, 450, 120, 30));
        label_7->setFont(font);
        serial_toggle = new QRadioButton(centralwidget);
        serial_toggle->setObjectName("serial_toggle");
        serial_toggle->setGeometry(QRect(170, 320, 31, 30));
        serial_toggle->setFont(font);
        serial_toggle->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{\n"
"    width:30px;\n"
"    height:30px;\n"
"}\n"
""));
        serial_toggle->setIconSize(QSize(32, 32));
        serial_toggle->setCheckable(true);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(250, 390, 181, 151));
        spinBox->setMaximum(10000000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\220\215\357\274\232", nullptr));
        serial_baudrate->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        serial_baudrate->setItemText(1, QCoreApplication::translate("MainWindow", "115200", nullptr));

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
        message_send_btn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        message_send_clean_btn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        message_recv_clean_btn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Command", nullptr));
        serial_toggle->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
