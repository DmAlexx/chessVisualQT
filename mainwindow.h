#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stylehelper.h"
#include <QPainter>
#include "QMessageBox"
#include <QInputDialog>
#include <QSize>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::string getFirstGamerName();
    std::string getSecondGamerName();

private slots:
    void on_about_clicked();
    void on_playwithai_clicked();
    void on_multiplayergame_clicked();
    void on_playervsplayer_clicked();

private:
    Ui::MainWindow *ui;
    void setInterfaceStyle();
    QString m_firstPlayerName;
    QString m_secondPlayerName;
    void startSceneVisual();
};

#endif // MAINWINDOW_H
