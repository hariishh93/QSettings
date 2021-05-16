#ifndef WIDGET_H
#define WIDGET_H
#include "QList"
#include "QColor"
#include "QPushButton"

#include <QWidget>

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
    void on_Button_1_clicked();

    void on_Button_2_clicked();

    void on_Button_3_clicked();

    void on_Button_4_clicked();

    void on_Button_5_clicked();

    void on_Button_6_clicked();

    void on_Button_7_clicked();

    void on_Button_8_clicked();

    void on_Button_9_clicked();

    void on_save_color_clicked();

    void on_load_color_clicked();

private:
    Ui::Widget *ui;
    QList<QColor> ColorList;
       void SaveColor(QString key,QColor color);
       QColor loadColor(QString key);
       void setLoadedColor(QString key,int index,QPushButton *button);
};
#endif // WIDGET_H
