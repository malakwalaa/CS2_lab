#include "coursemanagement.h"
#include "ui_coursemanagement.h"

coursemanagement::coursemanagement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::coursemanagement)
{
    ui->setupUi(this);
}

coursemanagement::~coursemanagement()
{
    delete ui;
}
