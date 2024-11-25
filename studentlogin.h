#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QDialog>

namespace Ui {
class StudentLogin;
}

class StudentLogin : public QDialog
{
    Q_OBJECT

public:
    explicit StudentLogin(QWidget *parent = nullptr);
    ~StudentLogin();

private slots:
    void on_backButton_clicked();

    void on_Registerbutton_clicked();

    void on_Login_button_clicked();

private:
    Ui::StudentLogin *ui;
};

#endif // STUDENTLOGIN_H
