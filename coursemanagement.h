#ifndef COURSEMANAGEMENT_H
#define COURSEMANAGEMENT_H

#include <QDialog>

namespace Ui {
class coursemanagement;
}

class coursemanagement : public QDialog
{
    Q_OBJECT

public:
    explicit coursemanagement(QWidget *parent = nullptr);
    ~coursemanagement();

private:
    Ui::coursemanagement *ui;
};

#endif // COURSEMANAGEMENT_H
