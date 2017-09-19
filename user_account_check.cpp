#include "user_account_check.h"
#include <QRegularExpression>

UserAccount::UserAccount(QWidget *parent) : QMainWindow(parent)
{

}
bool UserAccount::EmailCheck(QString estr){

    QRegularExpression email_regex("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");

    if(email_regex.match(estr).hasMatch()){
        return true;
    }


 }
