// //this works
// #ifndef ADMINDASHBOARD_H
// #define ADMINDASHBOARD_H

// #include <QDialog>
// class coursemanagement;
// namespace Ui {
// class admindashboard;
// }

// class admindashboard : public QDialog
// {
//     Q_OBJECT

// public:
//     explicit admindashboard(QWidget *parent = nullptr);
//     ~admindashboard();
    
// private slots:
    
//     void on_crsmgmtbutton_clicked();


// private:
//     Ui::admindashboard *ui;
//     coursemanagement *courseManagement;
// };

// #endif // ADMINDASHBOARD_H
#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QDialog>
#include <memory> // For std::unique_ptr

class coursemanagement;

namespace Ui {
class admindashboard;
}

class admindashboard : public QDialog
{
    Q_OBJECT

public:
    explicit admindashboard(QWidget *parent = nullptr);
    ~admindashboard();

private slots:
    void on_crsmgmtbutton_clicked();

private:
    Ui::admindashboard *ui;
    std::unique_ptr<coursemanagement> courseManagement; // Smart pointer for resource management
};

#endif // ADMINDASHBOARD_H
