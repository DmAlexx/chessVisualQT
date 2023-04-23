#include "stylehelper.h"


QString StyleHelper::getMainWindowBackGrnd()
{
    return "QMainWindow {"
           "background-image: url(:/resources/images/bg.png);"
           "}";
}

QString StyleHelper::getStartButtonsKeyStyle()
{
    return "QPushButton{"
        "color:white;"
        "}"

           "QPushButton{"
           "font: 13pt 'Showcard Gothic';"
           "}"


        "QPushButton{"
           "border:none;"
           "border-radius:5px;"
           "background-color: qlineargradient(spread:pad, x1:0.04, y1:0.0568182, x2:0.04, y2:0.0568182, stop:0 rgba(0, 163, 255, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"

        "QPushButton::hover{"
           "background-color: qlineargradient(spread:pad, x1:0.04, y1:0.0568182, x2:0.04, y2:0.0568182, stop:0 rgba(60, 24, 255, 255), stop:1 rgba(255, 255, 255, 255));"
        "}"

        "QPushButton::pressed{"
            "background-color: qlineargradient(spread:pad, x1:0.04, y1:0.0568182, x2:0.04, y2:0.0568182, stop:0 rgba(0, 163, 255, 255), stop:1 rgba(255, 255, 255, 255));"
        "}";
}

QString StyleHelper::getStartLabelStyle()
{
    return "QLabel {"
           "color:white;"
           "}"

           "QLabel {"
           "font: 13pt 'Showcard Gothic';"
           "}"

        "QLabel{"
           "border:none;"
           "border-radius:5px;"
           "background-color: rgb(0, 129, 0);"
           "}";
}
