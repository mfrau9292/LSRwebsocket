/********************************************************************************
** Form generated from reading UI file 'Client.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLineEdit *textLineEdit;
    QPushButton *sendButton;
    QTextEdit *chatTextEdit;
    QLineEdit *pseudoLineEdit;
    QLabel *socketStateLabel;
    QPushButton *connectButton;
    QLabel *socketStateLabel_2;
    QPushButton *disconnectButton;
    QPushButton *pbAdd;
    QTextEdit *tePoints;
    QPushButton *pbSend;
    QLineEdit *inx;
    QLineEdit *iny;
    QPushButton *pbClear;
    QPushButton *pbfromDB;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QStringLiteral("Client"));
        Client->resize(600, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Client->sizePolicy().hasHeightForWidth());
        Client->setSizePolicy(sizePolicy);
        Client->setMinimumSize(QSize(480, 480));
        Client->setMaximumSize(QSize(600, 600));
        textLineEdit = new QLineEdit(Client);
        textLineEdit->setObjectName(QStringLiteral("textLineEdit"));
        textLineEdit->setGeometry(QRect(120, 440, 271, 27));
        sendButton = new QPushButton(Client);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(400, 440, 71, 27));
        chatTextEdit = new QTextEdit(Client);
        chatTextEdit->setObjectName(QStringLiteral("chatTextEdit"));
        chatTextEdit->setGeometry(QRect(10, 50, 461, 381));
        pseudoLineEdit = new QLineEdit(Client);
        pseudoLineEdit->setObjectName(QStringLiteral("pseudoLineEdit"));
        pseudoLineEdit->setGeometry(QRect(10, 440, 101, 27));
        socketStateLabel = new QLabel(Client);
        socketStateLabel->setObjectName(QStringLiteral("socketStateLabel"));
        socketStateLabel->setGeometry(QRect(380, 10, 91, 31));
        connectButton = new QPushButton(Client);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setGeometry(QRect(10, 10, 91, 31));
        socketStateLabel_2 = new QLabel(Client);
        socketStateLabel_2->setObjectName(QStringLiteral("socketStateLabel_2"));
        socketStateLabel_2->setGeometry(QRect(290, 10, 91, 31));
        disconnectButton = new QPushButton(Client);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));
        disconnectButton->setGeometry(QRect(110, 10, 91, 31));
        pbAdd = new QPushButton(Client);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));
        pbAdd->setGeometry(QRect(500, 360, 75, 23));
        tePoints = new QTextEdit(Client);
        tePoints->setObjectName(QStringLiteral("tePoints"));
        tePoints->setGeometry(QRect(490, 120, 104, 71));
        pbSend = new QPushButton(Client);
        pbSend->setObjectName(QStringLiteral("pbSend"));
        pbSend->setGeometry(QRect(500, 400, 75, 23));
        inx = new QLineEdit(Client);
        inx->setObjectName(QStringLiteral("inx"));
        inx->setGeometry(QRect(480, 300, 113, 20));
        iny = new QLineEdit(Client);
        iny->setObjectName(QStringLiteral("iny"));
        iny->setGeometry(QRect(480, 330, 113, 20));
        pbClear = new QPushButton(Client);
        pbClear->setObjectName(QStringLiteral("pbClear"));
        pbClear->setGeometry(QRect(500, 440, 75, 23));
        pbfromDB = new QPushButton(Client);
        pbfromDB->setObjectName(QStringLiteral("pbfromDB"));
        pbfromDB->setGeometry(QRect(510, 20, 75, 23));

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "QtWebsocket Client Example", 0));
        textLineEdit->setText(QString());
        textLineEdit->setPlaceholderText(QApplication::translate("Client", "message", 0));
        sendButton->setText(QApplication::translate("Client", "Send", 0));
        pseudoLineEdit->setText(QString());
        pseudoLineEdit->setPlaceholderText(QApplication::translate("Client", "pseudo", 0));
        socketStateLabel->setText(QApplication::translate("Client", "Unknow", 0));
        connectButton->setText(QApplication::translate("Client", "Connect", 0));
        socketStateLabel_2->setText(QApplication::translate("Client", "Socket state:", 0));
        disconnectButton->setText(QApplication::translate("Client", "Disconnect", 0));
        pbAdd->setText(QApplication::translate("Client", "ADD", 0));
        pbSend->setText(QApplication::translate("Client", "SEND", 0));
        pbClear->setText(QApplication::translate("Client", "CLEAR", 0));
        pbfromDB->setText(QApplication::translate("Client", "fromDB", 0));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
