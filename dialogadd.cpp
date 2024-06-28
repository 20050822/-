#include "dialogadd.h"
#include "ui_dialogadd.h"

DialogAdd::DialogAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdd)
{
    ui->setupUi(this);
    setWindowTitle("添加客房");
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

//通过输入内容获取客房名称
QString DialogAdd::getName()
{
    return ui->lineEditName->text();
}

//通过输入或者调节获取客房面积
int DialogAdd::getArea()
{
    return ui->spinBoxArea->value();
}

//通过输入或者调节获取客房价格
double DialogAdd::getPrice()
{
    return ui->doubleSpinBoxPrice->value();
}

//通过输入或者调节获取客房床位
int DialogAdd::getAge()
{
    return ui->spinBoxAge->value();
}

//通过选择设置客房初始状态
bool DialogAdd::getState()
{
    return ui->comboBox->currentText()=="入住" ? true:false;
}


DialogAdd::~DialogAdd()
{
    delete ui;
}

//点击确认按钮存储完信息后清空当前内容
void DialogAdd::on_pushButton_clicked()
{
    //发射信号到主窗口
    emit dialogOK();
    ui->lineEditName->clear();
    ui->spinBoxArea->clear();
    ui->doubleSpinBoxPrice->clear();
    ui->spinBoxAge->clear();
    this->close();
}

//点击关闭按钮
void DialogAdd::on_pushButton_2_clicked()
{
    this->close();
}
