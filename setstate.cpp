#include "setstate.h"
#include "ui_setstate.h"

setState::setState(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setState)
{
    ui->setupUi(this);
    setWindowTitle("修改状态客房");
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

int setState::getId()
{
    return  ui->spinBoxId->value();
}

bool setState::getstate()
{
     return ui->comboBoxState->currentText()=="入住" ? true:false;
}

setState::~setState()
{
    delete ui;
}
