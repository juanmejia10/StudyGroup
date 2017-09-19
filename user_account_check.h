#ifndef USER_ACCOUNT_CHECK_H
#define USER_ACCOUNT_CHECK_H

#include <QMainWindow>
#include <QWidget>
#include <regex>

class UserAccount : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserAccount(QWidget *parent = nullptr);
    bool EmailCheck (QString estr);

signals:

public slots:
};

#endif // USER_ACCOUNT_CHECK_H
