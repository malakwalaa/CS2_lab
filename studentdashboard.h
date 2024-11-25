#ifndef STUDENTDASHBOARD_H
#define STUDENTDASHBOARD_H

#include <QDialog>

namespace Ui {
class studentdashboard;
}

class studentdashboard : public QDialog
{
    Q_OBJECT

public:
    explicit studentdashboard(QWidget *parent = nullptr);
    ~studentdashboard();

private slots:
    void on_eventRegistrationButton_clicked();

    void on_courseRegistrationButton_clicked();

    void on_academicProfileButton_clicked();

private:
    Ui::studentdashboard *ui;
};

#endif // STUDENTDASHBOARD_H
