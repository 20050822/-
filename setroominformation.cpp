#include "setroominformation.h"
#include "ui_setroominformation.h"

SetRoomInformation::SetRoomInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetRoomInformation)
{
    ui->setupUi(this);
}

SetRoomInformation::~SetRoomInformation()
{
    delete ui;
}
