#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QProcess>
#include<displayroominformation.h>
#include<setroominformation.h>
#include<deleteroominformation.h>
#include<addroominformation.h>
#include<quit.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_DisplayRoomInformation_clicked();

    void on_SetRoomStatus_clicked();

    void on_DeleteRoomInformation_clicked();

    void on_AddRoomInformation_clicked();

    void on_Quit_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
