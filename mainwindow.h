#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_signin_button_clicked();

    void on_lineEdit_username_signup_cursorPositionChanged(int arg1, int arg2);



    void on_lineEdit_email_editingFinished();

    void on_lineEdit_email_cursorPositionChanged(int arg1, int arg2);


    void on_lineEdit_email_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
