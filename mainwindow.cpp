#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogadd.h"
#include <QInputDialog>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->listWidget);
    setWindowTitle("酒店管理系统");

    ui->listWidget->setFlow(QListView::LeftToRight); // 设置从左到右布局
    ui->listWidget->setWrapping(true); // 设置自动换行

    ui->listWidget->setResizeMode(QListView::Adjust);
    ui->listWidget->clear();

    set=new setState(this);
    add=new DialogAdd(this);
    connect(add,&DialogAdd::dialogOK,this,&MainWindow::receivedata);

    ui->listWidget->setSpacing(5);
    //showFullScreen();
    showMaximized();
}

void MainWindow::showdate()
{
    ui->listWidget->clear(); // 每次显示数据前清空列表

    for (const auto& it : sumdata) {
        QString str;
        str.append("编号: " + QString::number(it.id));
        str.append("\n名称: " + it.name);
        str.append("\n面积: " + QString::number(it.area));
        str.append("\n价格: " + QString::number(it.price));
        str.append("\n床位: " + QString::number(it.age));
        str.append("\n状态: " + QString(it.state ? "入住" : "空闲"));

        QListWidgetItem *item = new QListWidgetItem(ui->listWidget);
        item->setText(str);

        if (it.state) {
            // 设置背景颜色为红色
            item->setBackground(Qt::red);
        } else {
            // 设置背景颜色为淡蓝色
            item->setBackground(QColor(173, 216, 230)); // 淡蓝色
        }
        ui->listWidget->addItem(item); // 将项添加到列表中
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{

    add->exec();
}

void MainWindow::receivedata()
{
    if(add==nullptr)return;

    hotedata data;
    data.id=count+1;
    data.name=add->getName();
    data.area=add->getArea();
    data.price=add->getPrice();
    data.age=add->getAge();
    data.state=add->getState();
    sumdata.append(data);
    count++;
    showdate();
}

int getIntWithoutHelpButton(QWidget *parent, const QString &title, const QString &label, int value, int minValue, int maxValue, int step, bool *ok)
{
    QInputDialog inputDialog(parent);
    inputDialog.setWindowTitle(title);
    inputDialog.setLabelText(label);
    inputDialog.setIntRange(minValue, maxValue);
    inputDialog.setIntValue(value);
    inputDialog.setIntStep(step);

    inputDialog.setWindowFlags(inputDialog.windowFlags() & ~Qt::WindowContextHelpButtonHint);

    int result = QDialog::Rejected;
    if (ok)
        *ok = false;

    if ((result = inputDialog.exec()) == QDialog::Accepted) {
        if (ok)
            *ok = true;
        return inputDialog.intValue();
    }

    return value;
}

void MainWindow::on_action_2_triggered()
{
    bool ok = false;
    int integer = getIntWithoutHelpButton(this,
                                       "删除客房",
                                       "请输入客房编号",
                                       0,
                                       0,
                                       40,
                                       1,
                                       &ok);
    if (ok) {
        // 遍历找到匹配的元素
        int index = -1;
        for (int i = 0; i < sumdata.size(); ++i) {
            if (sumdata[i].id == integer) {
                index = i;
                break;
            }
        }

        // 如果找到匹配的元素，则删除它
        if (index != -1) {
            sumdata.remove(index);
            showdate(); // 更新显示
        } else {
            QMessageBox::warning(this, "错误", "无效的客房编号");
        }
    }
}


void MainWindow::on_action_3_triggered()
{
    set->exec();
    int id=set->getId();
    bool state=set->getstate();

    for (auto& it : sumdata){
        if(it.id==id){
            it.state=state;
            showdate();
            break;
        }
    }
}
