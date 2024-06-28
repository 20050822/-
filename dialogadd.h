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
    explicit DialogAdd(QWidget *parent = nullptr);//构造函数，设定该类为顶级类，参数为QWidget*，防止被用于隐式类型转换

    //声明"与客房信息有关"函数
    QString getName();
    int getArea();
    double getPrice();
    int getAge();
    bool getState();

    ~DialogAdd();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    //声明"确认"和"取消"按钮

signals:
    void dialogOK();
    //声明信号

private:
    Ui::DialogAdd *ui;
};

#endif // DIALOGADD_H
