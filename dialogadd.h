#ifndef DIALOGADD_H
#define DIALOGADD_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogAdd;
}

class DialogAdd : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdd(QWidget *parent = nullptr);

    QString getName();
    int getArea();
    double getPrice();
    int getAge();
    bool getState();

    ~DialogAdd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


signals:
    void dialogOK();

private:
    Ui::DialogAdd *ui;
};

#endif // DIALOGADD_H
