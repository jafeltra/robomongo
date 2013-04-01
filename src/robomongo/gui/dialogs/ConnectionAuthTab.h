#pragma once

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>

namespace Robomongo
{
    class ConnectionSettings;

    class ConnectionAuthTab : public QWidget
    {
        Q_OBJECT

    public:
        ConnectionAuthTab(ConnectionSettings *settings);
        void accept();

    private slots:
        void toggleEchoMode();

    private:
        QLineEdit *_userName;
        QLabel    *_userNameLabel;
        QLineEdit *_userPassword;
        QLabel    *_userPasswordLabel;
        QLineEdit *_databaseName;
        QLabel    *_databaseNameLabel;
        QLabel    *_databaseNameDescriptionLabel;
        QCheckBox *_useAuth;
        QPushButton *_echoModeButton;

        ConnectionSettings *_settings;
        //QGridLayout *_authLayout;

    protected slots:
        void authChecked(bool checked);
    };
}
