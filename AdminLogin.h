#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include <QWidget>
#include <admindashboard.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class AdminLogin;
}
QT_END_NAMESPACE

class AdminLogin : public QDialog {
    Q_OBJECT


public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private slots:
    void on_loginButton_clicked();
    void on_backButton_clicked();

private:
    Ui::AdminLogin *ui;
    admindashboard *dashboard;
};

#endif // ADMINLOGIN_H
//













