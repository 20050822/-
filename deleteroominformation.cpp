#include "deleteroominformation.h"
#include "ui_deleteroominformation.h"

DeleteRoomInformation::DeleteRoomInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DeleteRoomInformation)
{
    ui->setupUi(this);
}

DeleteRoomInformation::~DeleteRoomInformation()
{
    delete ui;
}
