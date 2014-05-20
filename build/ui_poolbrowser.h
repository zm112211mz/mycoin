/********************************************************************************
** Form generated from reading UI file 'poolbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POOLBROWSER_H
#define UI_POOLBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PoolBrowser
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *Last;
    QLabel *label;
    QLabel *last;
    QLabel *lastu;
    QWidget *Last_2;
    QLabel *label_4;
    QLabel *ask;
    QLabel *asku;
    QWidget *Last_3;
    QLabel *label_10;
    QLabel *bid;
    QLabel *bidu;
    QPushButton *startButton;
    QWidget *widget;
    QLabel *label_11;
    QLabel *high;
    QLabel *label_14;
    QLabel *low;
    QLabel *label_16;
    QLabel *volumeb;
    QLabel *label_18;
    QLabel *volumes;
    QLabel *label_17;
    QLabel *volumeu;
    QWidget *widget_2;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *bo;
    QLabel *so;
    QPushButton *bittrex;
    QLabel *label_24;
    QLabel *label_13;
    QLabel *bitcoin;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *yest;
    QWidget *tab_4;
    QLabel *label_2;

    void setupUi(QWidget *PoolBrowser)
    {
        if (PoolBrowser->objectName().isEmpty())
            PoolBrowser->setObjectName(QStringLiteral("PoolBrowser"));
        PoolBrowser->setWindowModality(Qt::NonModal);
        PoolBrowser->resize(731, 509);
        gridLayout = new QGridLayout(PoolBrowser);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        tabWidget = new QTabWidget(PoolBrowser);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral("background:lightgrey;"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        Last = new QWidget(tab_3);
        Last->setObjectName(QStringLiteral("Last"));
        Last->setGeometry(QRect(90, 70, 181, 101));
        Last->setStyleSheet(QStringLiteral("border-right:1px solid black;"));
        label = new QLabel(Last);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 71, 31));
        label->setStyleSheet(QStringLiteral("border:none;"));
        last = new QLabel(Last);
        last->setObjectName(QStringLiteral("last"));
        last->setGeometry(QRect(60, 50, 121, 20));
        last->setStyleSheet(QStringLiteral("border:none;"));
        lastu = new QLabel(Last);
        lastu->setObjectName(QStringLiteral("lastu"));
        lastu->setGeometry(QRect(60, 70, 121, 20));
        lastu->setStyleSheet(QStringLiteral("border:none;"));
        Last_2 = new QWidget(tab_3);
        Last_2->setObjectName(QStringLiteral("Last_2"));
        Last_2->setGeometry(QRect(270, 70, 181, 101));
        Last_2->setStyleSheet(QStringLiteral("border-right:1px solid black;"));
        label_4 = new QLabel(Last_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 71, 31));
        label_4->setStyleSheet(QStringLiteral("border:none;"));
        ask = new QLabel(Last_2);
        ask->setObjectName(QStringLiteral("ask"));
        ask->setGeometry(QRect(60, 50, 121, 20));
        ask->setStyleSheet(QStringLiteral("border:none;"));
        asku = new QLabel(Last_2);
        asku->setObjectName(QStringLiteral("asku"));
        asku->setGeometry(QRect(60, 70, 121, 20));
        asku->setStyleSheet(QStringLiteral("border:none;"));
        Last_3 = new QWidget(tab_3);
        Last_3->setObjectName(QStringLiteral("Last_3"));
        Last_3->setGeometry(QRect(450, 70, 181, 101));
        label_10 = new QLabel(Last_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 71, 31));
        label_10->setStyleSheet(QStringLiteral("border:none;"));
        bid = new QLabel(Last_3);
        bid->setObjectName(QStringLiteral("bid"));
        bid->setGeometry(QRect(70, 50, 111, 20));
        bidu = new QLabel(Last_3);
        bidu->setObjectName(QStringLiteral("bidu"));
        bidu->setGeometry(QRect(70, 70, 111, 20));
        startButton = new QPushButton(tab_3);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(350, 380, 120, 60));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        startButton->setMinimumSize(QSize(120, 60));
        widget = new QWidget(tab_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 250, 701, 51));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 10, 51, 21));
        high = new QLabel(widget);
        high->setObjectName(QStringLiteral("high"));
        high->setGeometry(QRect(60, 30, 101, 16));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(170, 10, 31, 16));
        low = new QLabel(widget);
        low->setObjectName(QStringLiteral("low"));
        low->setGeometry(QRect(180, 30, 101, 16));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(290, 10, 81, 16));
        volumeb = new QLabel(widget);
        volumeb->setObjectName(QStringLiteral("volumeb"));
        volumeb->setGeometry(QRect(390, 10, 131, 16));
        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(530, 10, 91, 16));
        volumes = new QLabel(widget);
        volumes->setObjectName(QStringLiteral("volumes"));
        volumes->setGeometry(QRect(550, 30, 141, 16));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(290, 30, 91, 16));
        volumeu = new QLabel(widget);
        volumeu->setObjectName(QStringLiteral("volumeu"));
        volumeu->setGeometry(QRect(390, 30, 131, 16));
        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 300, 701, 51));
        label_22 = new QLabel(widget_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(190, 20, 101, 16));
        label_23 = new QLabel(widget_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(360, 20, 111, 16));
        bo = new QLabel(widget_2);
        bo->setObjectName(QStringLiteral("bo"));
        bo->setGeometry(QRect(300, 20, 31, 16));
        so = new QLabel(widget_2);
        so->setObjectName(QStringLiteral("so"));
        so->setGeometry(QRect(480, 20, 71, 16));
        bittrex = new QPushButton(tab_3);
        bittrex->setObjectName(QStringLiteral("bittrex"));
        bittrex->setGeometry(QRect(210, 410, 120, 30));
        sizePolicy.setHeightForWidth(bittrex->sizePolicy().hasHeightForWidth());
        bittrex->setSizePolicy(sizePolicy);
        bittrex->setMinimumSize(QSize(120, 30));
        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(110, 200, 461, 31));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(590, 20, 101, 21));
        bitcoin = new QLabel(tab_3);
        bitcoin->setObjectName(QStringLiteral("bitcoin"));
        bitcoin->setGeometry(QRect(602, 40, 81, 21));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 290, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans,sans-serif"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        yest = new QLabel(tab_3);
        yest->setObjectName(QStringLiteral("yest"));
        yest->setGeometry(QRect(330, 20, 161, 31));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 53, 16));
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(PoolBrowser);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PoolBrowser);
    } // setupUi

    void retranslateUi(QWidget *PoolBrowser)
    {
        PoolBrowser->setWindowTitle(QApplication::translate("PoolBrowser", "Digging", 0));
        label->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:12pt;\">Last</span></p></body></html>", 0));
        last->setText(QApplication::translate("PoolBrowser", "0.00000000 B", 0));
        lastu->setText(QApplication::translate("PoolBrowser", "0.00000000 $", 0));
        label_4->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:12pt;\">Ask</span></p></body></html>", 0));
        ask->setText(QApplication::translate("PoolBrowser", "0.00000000 B", 0));
        asku->setText(QApplication::translate("PoolBrowser", "0.00000000 $", 0));
        label_10->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:12pt;\">Bid</span></p></body></html>", 0));
        bid->setText(QApplication::translate("PoolBrowser", "0.00000000 B", 0));
        bidu->setText(QApplication::translate("PoolBrowser", "0.00000000 $", 0));
        startButton->setText(QApplication::translate("PoolBrowser", "Update Prices", 0));
        label_11->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">High</span></p></body></html>", 0));
        high->setText(QApplication::translate("PoolBrowser", "0.000000000", 0));
        label_14->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Low</span></p></body></html>", 0));
        low->setText(QApplication::translate("PoolBrowser", "0.000000000", 0));
        label_16->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Volume SC</span></p></body></html>", 0));
        volumeb->setText(QApplication::translate("PoolBrowser", "0000", 0));
        label_18->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Volume BTC</span></p></body></html>", 0));
        volumes->setText(QApplication::translate("PoolBrowser", "0", 0));
        label_17->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Volume USD</span></p></body></html>", 0));
        volumeu->setText(QApplication::translate("PoolBrowser", "0000 $", 0));
        label_22->setText(QApplication::translate("PoolBrowser", "Open buy orders", 0));
        label_23->setText(QApplication::translate("PoolBrowser", "Open sell orders", 0));
        bo->setText(QApplication::translate("PoolBrowser", "0", 0));
        so->setText(QApplication::translate("PoolBrowser", "0", 0));
        bittrex->setText(QApplication::translate("PoolBrowser", "Go to Bittrex", 0));
        label_24->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-style:italic; color:#000000;\">Last 24 hours</span></p></body></html>", 0));
        label_13->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-weight:600;\">Bitcoin Price</span></p></body></html>", 0));
        bitcoin->setText(QApplication::translate("PoolBrowser", "1000 $", 0));
        label_5->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">Bittrex, since yesterday :</span></p></body></html>", 0));
        yest->setText(QApplication::translate("PoolBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600;\">+ 0 %</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PoolBrowser", "Bittrex", 0));
        label_2->setText(QApplication::translate("PoolBrowser", "Soon..", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PoolBrowser", "Poloniex", 0));
    } // retranslateUi

};

namespace Ui {
    class PoolBrowser: public Ui_PoolBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POOLBROWSER_H
