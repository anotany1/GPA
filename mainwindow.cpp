#include <QLabel>
#include <vector>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "MarkLabel.h"
#include "MarkLabelList.h"
#include <QKeyEvent>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QString>


using namespace std;

const int MainWindow::maxColumnCount = 15;
const int MainWindow::maxRowCount = 5;

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->marksWidget->setGeometry(0,0, width(), 250);
    ui->marksLayout->setGeometry(ui->marksWidget->geometry());

    curRow = 0;
    curColumn = 0;
    hidedLabels = false;
    markLabelFont.setPointSize(16);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearHided()
{
    QLayoutItem* item;
    MarkLabel* markLabel;
    vector<MarkLabel*> labels;
    while ( ( item = ui->gridLayoutWidget->layout()->takeAt( 0 ) ) != NULL )
    {
        markLabel = static_cast<MarkLabel*>(item->widget());
        if (item != NULL)
            labels.push_back(markLabel);
        delete item;
    }
    curColumn = 0;
    curRow = 0;
    for (vector<MarkLabel*>::iterator iterator = labels.begin(); iterator != labels.end(); iterator++)
    {
       AddMarkLabel(*iterator);
    }

}

bool MainWindow::eventFilter(QObject *object, QEvent *event)
{
     if (event->type() == QEvent::MouseButtonPress) {

         if (MarkLabel* label = static_cast<MarkLabel*>(object))
         {
            label->hide();
            markLabels.Sub(label);
            ui->midMarkLabel->setText(QString::number(markLabels.GetMidMark()));
            ui->markCountLabel->setText(QString::number(markLabels.GetSize()));
            hidedLabels = true;
            return true;
         }
    }
    return QObject::eventFilter(object, event);
}


    void MainWindow::keyPressEvent(QKeyEvent* event)
    {
        //key = event->key();
    }

    void MainWindow::keyReleaseEvent(QKeyEvent* event) {

        switch(event->key()) {
        case Qt::Key_Escape:
            break;
        case Qt::Key_Enter:
            on_clearButton_clicked();
        break;
        case Qt::Key_1:
            AddMark(1);
        break;
        case Qt::Key_2:
            AddMark(2);
        break;
        case Qt::Key_3:
            AddMark(3);
        break;
        case Qt::Key_4:
            AddMark(4);
        break;
        case Qt::Key_5:
            AddMark(5);
        break;
        case Qt::Key_6:
            AddMark(6);
        break;
        case Qt::Key_7:
            AddMark(7);
        break;
        case Qt::Key_8:
            AddMark(8);
        break;
        case Qt::Key_9:
            AddMark(9);
        break;
        case Qt::Key_0:
            AddMark(10);
        break;
      }
      update();
    }

bool MainWindow::AddMarkLabel(MarkLabel *markLabel)
{
    if (curRow >= maxRowCount)
        return false;
    ui->marksLayout->addWidget(markLabel, curRow, curColumn);
    if ((curColumn + 1) < maxColumnCount) {
        ++curColumn;
    }
    else {
        curRow++;
        curColumn = 0;
    }

    ui->midMarkLabel->setText(QString::number(markLabels.GetMidMark()));
    ui->markCountLabel->setText(QString::number(markLabels.GetSize()));

    return true;
}

bool MainWindow::AddMark(int mark)
{
    if (hidedLabels)
        clearHided();
    if (curRow >= maxRowCount)
            return false;
    MarkLabel *markLabel = markLabels.Add(mark);
    if (markLabel == NULL)
            return false;

    markLabel->installEventFilter(this);
    markLabel->setFont(markLabelFont);
    AddMarkLabel(markLabel);
    return true;
}

void MainWindow::on_pushButton_0_clicked()
{
    AddMark(0);
}

void MainWindow::on_pushButton_1_clicked()
{
    AddMark(1);
}

void MainWindow::on_pushButton_2_clicked()
{
    AddMark(2);
}

void MainWindow::on_pushButton_3_clicked()
{
    AddMark(3);
}

void MainWindow::on_pushButton_4_clicked()
{
    AddMark(4);
}

void MainWindow::on_pushButton_5_clicked()
{
    AddMark(5);
}

void MainWindow::on_pushButton_6_clicked()
{
    AddMark(6);
}

void MainWindow::on_pushButton_7_clicked()
{
    AddMark(7);
}

void MainWindow::on_pushButton_8_clicked()
{
    AddMark(8);
}

void MainWindow::on_pushButton_9_clicked()
{
    AddMark(9);
}

void MainWindow::on_pushButton_10_clicked()
{
    AddMark(10);
}

void MainWindow::AboutMessageBox()
{
    QMessageBox::information(0,"About", "Program created by Anton Baryshnikov<br>Copyright(C) 2013");
}

void MainWindow::on_clearButton_clicked()
{
    markLabels.Clear();
    ui->midMarkLabel->setText("0");
    ui->markCountLabel->setText("0");
    curRow = 0;
    curColumn = 0;
    hidedLabels = false;
}



void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);
    menu.addAction( "О программе", this, SLOT(AboutMessageBox()));
    menu.exec(event->globalPos());
}

void MainWindow::on_MainWindow_customContextMenuRequested(const QPoint &pos)
{

}
