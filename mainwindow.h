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
    MainWindow(QWidget *parent = nullptr);//构造函数，设定该类为顶级类，参数为QWidget*
    void showdate();//声明"显示数据"函数
    ~MainWindow();

private slots:
    //声明"接受数据"函数
    void receivedata();
    //声明"主窗口三个点击行为"
    void on_action_triggered();//添加
    void on_action_2_triggered();//删除
    void on_action_3_triggered();//修改

private:
    Ui::MainWindow *ui;
    //声明两个对象空指针
    DialogAdd *add=nullptr;//添加数据
    setState *set=nullptr;//设置状态

    //声明"客房数据"结构体
    typedef struct _hotedata{
        int id;
        QString name;
        int area;
        double price;
        int age;
        bool state;
    }hotedata;

    //声明用QVector存储结构体的数据
    QVector <hotedata>sumdata;

    //初始化计数变量，用于"编号"、"删除"时
    int count=0;
};
#endif // MAINWINDOW_H
