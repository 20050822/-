#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogadd.h"
#include <QVector>
#include "setstate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void showdate();
    ~MainWindow();

private slots:
    void on_action_triggered();
    void receivedata();


    void on_action_2_triggered();

    void on_action_3_triggered();

private:
    Ui::MainWindow *ui;
    DialogAdd *add=nullptr;
    setState *set=nullptr;

    typedef struct _hotedata{
        int id;
        QString name;
        int area;
        double price;
        int age;
        bool state;
    }hotedata;

    QVector <hotedata>sumdata;
    int count=0;
};
#endif // MAINWINDOW_H
