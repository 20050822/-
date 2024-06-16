#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_DisplayRoomInformation_clicked()
{
    DisplayRoomInformation * dis = new DisplayRoomInformation;
    dis->setWindowTitle("显示客房信息");
    dis->show();
}

void Widget::on_SetRoomStatus_clicked()
{
    SetRoomInformation * set = new SetRoomInformation;
    set->setWindowTitle("设置客房信息");
    set->show();
}

void Widget::on_DeleteRoomInformation_clicked()
{
    DeleteRoomInformation * del = new DeleteRoomInformation;
    del->setWindowTitle("删除客房信息");
    del->show();
}

void Widget::on_AddRoomInformation_clicked()
{
    AddRoomInformation * add = new AddRoomInformation;
    add->setWindowTitle("添加客房信息");
    add->show();
}

void Widget::on_Quit_clicked()
{
}
