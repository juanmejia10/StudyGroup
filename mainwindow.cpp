#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user_account_check.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo(":/resources/img/GSLogoName2.png");    // StudyGroup logo
    ui->label_logo->setPixmap(logo.scaled(250,300,Qt::KeepAspectRatio,Qt::SmoothTransformation));     // Resize to fit
    //ui->tabWidget->resize(400,500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_signin_button_clicked()
{

}

void MainWindow::on_lineEdit_username_signup_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_lineEdit_email_editingFinished()
{
    UserAccount echeck;
    QString e = ui->lineEdit_email->text();
    if(echeck.EmailCheck(e)){
        //ui->label_2->setText("valid");
    }
    if(ui->lineEdit_email->text() != "hello"){
        ui->lineEdit_email->setStyleSheet("color:white; background-color: rgb(20, 230, 180)");
        QPixmap emailX(":/resources/img/x_mark.png");
        ui->label_email_check->setPixmap(emailX.scaled(20,20,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        ui->label_email_check->show();
    }
    else{
        QPixmap emailCheck(":/resources/img/check_mark.png");
        ui->label_email_check->setPixmap(emailCheck.scaled(31,31,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        ui->label_email_check->show();

    }

}

void MainWindow::on_lineEdit_email_cursorPositionChanged(int arg1, int arg2)
{
    if(arg1){
        ui->lineEdit_email->setStyleSheet("color: black; background-color:white");
    }
}


void MainWindow::on_lineEdit_email_textEdited(const QString &arg1)
{
    ui->label_email_check->hide();     // hides the red X when user begins editing text
    on_lineEdit_email_cursorPositionChanged(1,0);   // resets color when editing text

}
