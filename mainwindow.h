#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <MarkLabelList.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    static const int maxColumnCount;
    static const int maxRowCount;

    bool hidedLabels;

    int curRow, curColumn, key;
    QFont markLabelFont;
    Ui::MainWindow *ui;
    MarkLabelList markLabels;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void clearHided();
protected:
    virtual void contextMenuEvent(QContextMenuEvent *event);
private:
    QLabel *CreateLabel(QString text);
    bool AddMarkLabel(MarkLabel *markLabel);
    bool eventFilter(QObject *object, QEvent *event);

    bool AddMark(int mark);
    virtual void keyPressEvent(QKeyEvent *event);
    virtual void keyReleaseEvent(QKeyEvent *event);
private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_clearButton_clicked();
    void on_MainWindow_customContextMenuRequested(const QPoint &pos);
    void AboutMessageBox();
};



#endif // MAINWINDOW_H
