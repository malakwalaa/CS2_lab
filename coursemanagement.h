// //working code:
// #ifndef COURSEMANAGEMENT_H
// #define COURSEMANAGEMENT_H

// #include <QDialog>

// namespace Ui {
// class coursemanagement;
// }

// class coursemanagement : public QDialog
// {
//     Q_OBJECT

// public:
//     explicit coursemanagement(QWidget *parent = nullptr);
//     ~coursemanagement();

// private:
//     Ui::coursemanagement *ui;
// };

// #endif // COURSEMANAGEMENT_H
#ifndef COURSEMANAGEMENT_H
#define COURSEMANAGEMENT_H

#include <QDialog>
#include <course.h>
#include "university.h"

namespace Ui {
class coursemanagement;
}

class coursemanagement : public QDialog
{
    Q_OBJECT

public:
    explicit coursemanagement(university *uni, QWidget *parent = nullptr);
    ~coursemanagement();

private slots:
    void on_addCourseButton_clicked();
    void on_editCourseButton_clicked();
    void on_deleteCourseButton_clicked();

private:
    Ui::coursemanagement *ui;
    university *uni;
    void refreshCourseList();
};

#endif // COURSEMANAGEMENT_H
