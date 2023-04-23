
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setInterfaceStyle();

    startSceneVisual();
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::string MainWindow::getFirstGamerName()
{
    std::string firstPlayerName= m_firstPlayerName.toStdString();
    return firstPlayerName;
}

std::string MainWindow::getSecondGamerName()
{
    std::string secondPlayerName= m_secondPlayerName.toStdString();
    return secondPlayerName;
}

void MainWindow::setInterfaceStyle()
{
    this->setStyleSheet(StyleHelper::getMainWindowBackGrnd());
    ui->about->setStyleSheet(StyleHelper::getStartButtonsKeyStyle());
    ui->multiplayergame->setStyleSheet(StyleHelper::getStartButtonsKeyStyle());
    ui->playervsplayer->setStyleSheet(StyleHelper::getStartButtonsKeyStyle());
    ui->playwithai->setStyleSheet(StyleHelper::getStartButtonsKeyStyle());
    ui->gamestatus->setStyleSheet(StyleHelper::getStartLabelStyle());
    ui->gamestatus->setText("select");
    ui->gamestatus->setAlignment(Qt::AlignCenter);
    ui->lastmove->setStyleSheet(StyleHelper::getStartLabelStyle());
    ui->lastmove->setText("game mode");
    ui->lastmove->setAlignment(Qt::AlignCenter);
}

void MainWindow::startSceneVisual()
{
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
    QPixmap chessboardPixmap(":/resources/images/empty-chessboard.png");
    QGraphicsPixmapItem *chessboardItem = new QGraphicsPixmapItem(chessboardPixmap);
    chessboardItem->setPixmap(chessboardPixmap.scaled(478, 478, Qt::KeepAspectRatio));
    scene->addItem(chessboardItem);
    ui->graphicsView->setScene(scene);

}


void MainWindow::on_about_clicked()
{
    QMessageBox::about(this, "About game", "Chess\n"
                                      "version 1.0\n"
                                           "was written by Dmitry Borovyk");
}


void MainWindow::on_playwithai_clicked()
{
    QMessageBox::information(this, "Info", "available in next versions");
}


void MainWindow::on_multiplayergame_clicked()
{
    QMessageBox::information(this, "Info", "available in next versions");
}


void MainWindow::on_playervsplayer_clicked()
{
    m_firstPlayerName.clear();
    m_secondPlayerName.clear();
    while (m_firstPlayerName.isEmpty())
    {
        bool ok = false;
        m_firstPlayerName = QInputDialog::getText(this, tr("White figures"), tr("First player enter your name:"), QLineEdit::Normal, QString(), &ok);
        if (!ok)
        {
            break;
        }
    }
    while (m_secondPlayerName.isEmpty())
    {
        bool ok = false;
        m_secondPlayerName = QInputDialog::getText(this, tr("Black figures"), tr("Second player enter your name:"), QLineEdit::Normal, QString(), &ok);
        if (!ok)
        {
            break;
        }
    }

}

