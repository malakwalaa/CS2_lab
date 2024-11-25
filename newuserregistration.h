#ifndef NEWUSERREGISTRATION_H
#define NEWUSERREGISTRATION_H

#include <QDialog>

namespace Ui {
class NewUserRegistration;
}

class NewUserRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit NewUserRegistration(QWidget *parent = nullptr);
    ~NewUserRegistration();

private slots:
    void on_RegisterButton_clicked();

private:
    Ui::NewUserRegistration *ui;
};

#endif // NEWUSERREGISTRATION_H
