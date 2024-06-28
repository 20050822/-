#ifndef SETSTATE_H
#define SETSTATE_H

#include <QDialog>

namespace Ui {
class setState;
}

class setState : public QDialog
{
    Q_OBJECT

public:
    explicit setState(QWidget *parent = nullptr);//构造函数，设定该类为顶级类，参数为QWidget*，防止被用于隐式类型转换
    int getId();//声明"获取客房编号"函数
    bool getstate();//声明"设置客房状态"函数
    ~setState();

private:
    Ui::setState *ui;
};

#endif // SETSTATE_H
