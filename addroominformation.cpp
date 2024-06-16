#include "addroominformation.h"
#include "ui_addroominformation.h"

AddRoomInformation::AddRoomInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddRoomInformation)
{
    ui->setupUi(this);
}

AddRoomInformation::~AddRoomInformation()
{
    delete ui;
}
