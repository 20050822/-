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

QString DialogAdd::getName()
{
    return ui->lineEditName->text();
}

int DialogAdd::getArea()
{
    return ui->spinBoxArea->value();
}

double DialogAdd::getPrice()
{
    return ui->doubleSpinBoxPrice->value();
}

int DialogAdd::getAge()
{
    return ui->spinBoxAge->value();
}

bool DialogAdd::getState()
{
    return ui->comboBox->currentText()=="入住" ? true:false;
}

DialogAdd::~DialogAdd()
{
    delete ui;
}

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

void DialogAdd::on_pushButton_2_clicked()
{
    this->close();
}
