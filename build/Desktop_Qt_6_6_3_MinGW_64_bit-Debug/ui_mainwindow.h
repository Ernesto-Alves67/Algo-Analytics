/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *fr_estruturas;
    QVBoxLayout *verticalLayout_6;
    QFrame *entradas;
    QHBoxLayout *horizontalLayout;
    QFrame *fr_menu_ColecaoEstruturas;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *mainTab;
    QWidget *output_tab;
    QVBoxLayout *verticalLayout_12;
    QTextEdit *te_entryDisplay;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *le_entryData;
    QComboBox *cb_tipoEstrutura;
    QPushButton *btn_deletar;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *btn_buscar;
    QPushButton *btn_inserir;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_13;
    QListView *listView;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *listaEstruturas;
    QVBoxLayout *verticalLayout_15;
    QListView *listView_estruturas;
    QFrame *descEstruturas;
    QWidget *tab;
    QVBoxLayout *verticalLayout_14;
    QPlainTextEdit *te_dicionario;
    QFrame *fr_controleEstruturas;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *listaControles;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QFrame *gerGrafo;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *sb_verticeGrafo;
    QComboBox *cb_tipoGrafo;
    QPushButton *btn_geraGrafo;
    QFrame *line_3;
    QFrame *geraArvore;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *sb_noArvore;
    QComboBox *comboBox;
    QPushButton *btn_geraArvore;
    QFrame *line_2;
    QFrame *gerLista;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *le_numItems;
    QPushButton *btn_geraLista;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_reset;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *fr_infoLog;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *te_infoExec;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 154, 154);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setMinimumSize(QSize(0, 400));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        centralWidget->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fr_estruturas = new QFrame(centralWidget);
        fr_estruturas->setObjectName("fr_estruturas");
        fr_estruturas->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(0, 0, 0);\n"
""));
        fr_estruturas->setFrameShape(QFrame::NoFrame);
        verticalLayout_6 = new QVBoxLayout(fr_estruturas);
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, -1, 0);
        entradas = new QFrame(fr_estruturas);
        entradas->setObjectName("entradas");
        entradas->setMinimumSize(QSize(0, 300));
        entradas->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);"));
        entradas->setFrameShape(QFrame::StyledPanel);
        entradas->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(entradas);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fr_menu_ColecaoEstruturas = new QFrame(entradas);
        fr_menu_ColecaoEstruturas->setObjectName("fr_menu_ColecaoEstruturas");
        fr_menu_ColecaoEstruturas->setMinimumSize(QSize(300, 300));
        fr_menu_ColecaoEstruturas->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(57, 64, 127);"));
        fr_menu_ColecaoEstruturas->setFrameShape(QFrame::NoFrame);
        verticalLayout_4 = new QVBoxLayout(fr_menu_ColecaoEstruturas);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mainTab = new QTabWidget(fr_menu_ColecaoEstruturas);
        mainTab->setObjectName("mainTab");
        QFont font;
        font.setFamilies({QString::fromUtf8("JetBrains Mono NL SemiBold")});
        font.setPointSize(10);
        font.setBold(true);
        mainTab->setFont(font);
        mainTab->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"color: rgb(255, 255, 255);\n"
""));
        mainTab->setTabPosition(QTabWidget::North);
        mainTab->setTabShape(QTabWidget::Triangular);
        output_tab = new QWidget();
        output_tab->setObjectName("output_tab");
        verticalLayout_12 = new QVBoxLayout(output_tab);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName("verticalLayout_12");
        te_entryDisplay = new QTextEdit(output_tab);
        te_entryDisplay->setObjectName("te_entryDisplay");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setBold(true);
        te_entryDisplay->setFont(font1);
        te_entryDisplay->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));

        verticalLayout_12->addWidget(te_entryDisplay);

        frame = new QFrame(output_tab);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 70));
        frame->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(23, 15, 50);"));
        frame->setFrameShape(QFrame::NoFrame);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 0, 5, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        le_entryData = new QLineEdit(frame);
        le_entryData->setObjectName("le_entryData");
        le_entryData->setMinimumSize(QSize(60, 24));
        le_entryData->setMaximumSize(QSize(200, 16777215));
        le_entryData->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(le_entryData);

        cb_tipoEstrutura = new QComboBox(frame);
        cb_tipoEstrutura->addItem(QString());
        cb_tipoEstrutura->addItem(QString());
        cb_tipoEstrutura->addItem(QString());
        cb_tipoEstrutura->setObjectName("cb_tipoEstrutura");
        cb_tipoEstrutura->setMinimumSize(QSize(70, 24));
        cb_tipoEstrutura->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(cb_tipoEstrutura);

        btn_deletar = new QPushButton(frame);
        btn_deletar->setObjectName("btn_deletar");
        btn_deletar->setMinimumSize(QSize(0, 25));
        btn_deletar->setMaximumSize(QSize(90, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font2.setPointSize(8);
        btn_deletar->setFont(font2);
        btn_deletar->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(btn_deletar);

        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setMinimumSize(QSize(40, 25));
        comboBox_2->setMaximumSize(QSize(80, 16777215));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(comboBox_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 25));
        pushButton->setMaximumSize(QSize(90, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font3.setPointSize(10);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(pushButton);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(35, 25));
        pushButton_3->setMaximumSize(QSize(90, 16777215));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(pushButton_3);

        btn_buscar = new QPushButton(frame);
        btn_buscar->setObjectName("btn_buscar");
        btn_buscar->setMinimumSize(QSize(0, 25));
        btn_buscar->setMaximumSize(QSize(90, 16777215));
        btn_buscar->setFont(font3);
        btn_buscar->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(btn_buscar);

        btn_inserir = new QPushButton(frame);
        btn_inserir->setObjectName("btn_inserir");
        btn_inserir->setMinimumSize(QSize(0, 25));
        btn_inserir->setMaximumSize(QSize(90, 16777215));
        btn_inserir->setFont(font3);
        btn_inserir->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(btn_inserir);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_12->addWidget(frame);

        mainTab->addTab(output_tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tab_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(23, 15, 50);"));
        verticalLayout_13 = new QVBoxLayout(tab_3);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName("verticalLayout_13");
        listView = new QListView(tab_3);
        listView->setObjectName("listView");
        listView->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 112, 185);\n"
""));

        verticalLayout_13->addWidget(listView);

        mainTab->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        listaEstruturas = new QFrame(tab_2);
        listaEstruturas->setObjectName("listaEstruturas");
        listaEstruturas->setMinimumSize(QSize(150, 0));
        listaEstruturas->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        listaEstruturas->setFrameShape(QFrame::StyledPanel);
        listaEstruturas->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(listaEstruturas);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName("verticalLayout_15");
        listView_estruturas = new QListView(listaEstruturas);
        listView_estruturas->setObjectName("listView_estruturas");
        listView_estruturas->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_15->addWidget(listView_estruturas);


        horizontalLayout_2->addWidget(listaEstruturas);

        descEstruturas = new QFrame(tab_2);
        descEstruturas->setObjectName("descEstruturas");
        descEstruturas->setMinimumSize(QSize(150, 0));
        descEstruturas->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        descEstruturas->setFrameShape(QFrame::StyledPanel);
        descEstruturas->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(descEstruturas);

        mainTab->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_14 = new QVBoxLayout(tab);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName("verticalLayout_14");
        te_dicionario = new QPlainTextEdit(tab);
        te_dicionario->setObjectName("te_dicionario");
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        te_dicionario->setFont(font4);
        te_dicionario->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout_14->addWidget(te_dicionario);

        mainTab->addTab(tab, QString());

        verticalLayout_4->addWidget(mainTab);


        horizontalLayout->addWidget(fr_menu_ColecaoEstruturas);

        fr_controleEstruturas = new QFrame(entradas);
        fr_controleEstruturas->setObjectName("fr_controleEstruturas");
        fr_controleEstruturas->setMinimumSize(QSize(180, 300));
        fr_controleEstruturas->setMaximumSize(QSize(275, 16777215));
        fr_controleEstruturas->setLayoutDirection(Qt::LeftToRight);
        fr_controleEstruturas->setAutoFillBackground(false);
        fr_controleEstruturas->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"border-radius: 12px;"));
        fr_controleEstruturas->setFrameShape(QFrame::NoFrame);
        verticalLayout_9 = new QVBoxLayout(fr_controleEstruturas);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        listaControles = new QGroupBox(fr_controleEstruturas);
        listaControles->setObjectName("listaControles");
        listaControles->setMinimumSize(QSize(0, 200));
        listaControles->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(23, 15, 50);"));
        verticalLayout_11 = new QVBoxLayout(listaControles);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(listaControles);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);\n"
"border-radius:12px;"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -105, 261, 355));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        gerGrafo = new QFrame(scrollAreaWidgetContents);
        gerGrafo->setObjectName("gerGrafo");
        gerGrafo->setMinimumSize(QSize(120, 120));
        gerGrafo->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);\n"
"border-radius: 12px;"));
        gerGrafo->setFrameShape(QFrame::StyledPanel);
        gerGrafo->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(gerGrafo);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(gerGrafo);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(34, 16777215));
        QFont font5;
        font5.setBold(true);
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_4);

        sb_verticeGrafo = new QSpinBox(gerGrafo);
        sb_verticeGrafo->setObjectName("sb_verticeGrafo");
        sb_verticeGrafo->setMaximumSize(QSize(16777215, 25));
        sb_verticeGrafo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        sb_verticeGrafo->setMinimum(1);

        horizontalLayout_4->addWidget(sb_verticeGrafo);


        verticalLayout_8->addLayout(horizontalLayout_4);

        cb_tipoGrafo = new QComboBox(gerGrafo);
        cb_tipoGrafo->addItem(QString());
        cb_tipoGrafo->addItem(QString());
        cb_tipoGrafo->addItem(QString());
        cb_tipoGrafo->setObjectName("cb_tipoGrafo");
        cb_tipoGrafo->setMaximumSize(QSize(16777215, 25));
        cb_tipoGrafo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_8->addWidget(cb_tipoGrafo);

        btn_geraGrafo = new QPushButton(gerGrafo);
        btn_geraGrafo->setObjectName("btn_geraGrafo");
        btn_geraGrafo->setMinimumSize(QSize(0, 25));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font6.setPointSize(8);
        font6.setBold(false);
        btn_geraGrafo->setFont(font6);
        btn_geraGrafo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_8->addWidget(btn_geraGrafo);

        line_3 = new QFrame(gerGrafo);
        line_3->setObjectName("line_3");
        line_3->setMaximumSize(QSize(16777215, 4));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_3);


        formLayout->setWidget(0, QFormLayout::FieldRole, gerGrafo);

        geraArvore = new QFrame(scrollAreaWidgetContents);
        geraArvore->setObjectName("geraArvore");
        geraArvore->setMinimumSize(QSize(0, 120));
        geraArvore->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        geraArvore->setFrameShape(QFrame::StyledPanel);
        geraArvore->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(geraArvore);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(-1, 9, -1, 9);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(geraArvore);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(25, 16777215));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_3);

        sb_noArvore = new QSpinBox(geraArvore);
        sb_noArvore->setObjectName("sb_noArvore");
        sb_noArvore->setMaximumSize(QSize(16777215, 25));
        sb_noArvore->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(sb_noArvore);


        verticalLayout_7->addLayout(horizontalLayout_3);

        comboBox = new QComboBox(geraArvore);
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(80, 25));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_7->addWidget(comboBox);

        btn_geraArvore = new QPushButton(geraArvore);
        btn_geraArvore->setObjectName("btn_geraArvore");
        btn_geraArvore->setMinimumSize(QSize(0, 25));
        btn_geraArvore->setFont(font2);
        btn_geraArvore->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_7->addWidget(btn_geraArvore);

        line_2 = new QFrame(geraArvore);
        line_2->setObjectName("line_2");
        line_2->setMinimumSize(QSize(0, 0));
        line_2->setMaximumSize(QSize(16777215, 4));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_2);


        formLayout->setWidget(1, QFormLayout::FieldRole, geraArvore);

        gerLista = new QFrame(scrollAreaWidgetContents);
        gerLista->setObjectName("gerLista");
        gerLista->setMinimumSize(QSize(80, 0));
        gerLista->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        gerLista->setFrameShape(QFrame::StyledPanel);
        gerLista->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(gerLista);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        le_numItems = new QLineEdit(gerLista);
        le_numItems->setObjectName("le_numItems");
        le_numItems->setMinimumSize(QSize(60, 25));
        le_numItems->setMaximumSize(QSize(16777215, 25));
        QFont font7;
        font7.setPointSize(11);
        le_numItems->setFont(font7);
        le_numItems->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

        verticalLayout_3->addWidget(le_numItems);


        verticalLayout_10->addLayout(verticalLayout_3);

        btn_geraLista = new QPushButton(gerLista);
        btn_geraLista->setObjectName("btn_geraLista");
        btn_geraLista->setMinimumSize(QSize(0, 25));
        btn_geraLista->setMaximumSize(QSize(16777215, 16777215));
        btn_geraLista->setFont(font2);
        btn_geraLista->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_10->addWidget(btn_geraLista);

        line = new QFrame(gerLista);
        line->setObjectName("line");
        line->setMaximumSize(QSize(16777215, 4));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line);


        formLayout->setWidget(2, QFormLayout::FieldRole, gerLista);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_11->addWidget(scrollArea);


        verticalLayout_9->addWidget(listaControles);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_9->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btn_reset = new QPushButton(fr_controleEstruturas);
        btn_reset->setObjectName("btn_reset");
        btn_reset->setMinimumSize(QSize(0, 25));
        btn_reset->setMaximumSize(QSize(90, 16777215));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font8.setPointSize(9);
        btn_reset->setFont(font8);
        btn_reset->setLayoutDirection(Qt::LeftToRight);
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(btn_reset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_9->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(fr_controleEstruturas);


        verticalLayout_6->addWidget(entradas);

        fr_infoLog = new QFrame(fr_estruturas);
        fr_infoLog->setObjectName("fr_infoLog");
        fr_infoLog->setMinimumSize(QSize(0, 0));
        fr_infoLog->setMaximumSize(QSize(16777215, 16777215));
        fr_infoLog->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(57, 64, 127);"));
        fr_infoLog->setFrameShape(QFrame::NoFrame);
        verticalLayout_2 = new QVBoxLayout(fr_infoLog);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 7, -1, 7);
        label = new QLabel(fr_infoLog);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 20));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("JetBrains Mono ExtraBold")});
        font9.setPointSize(10);
        font9.setBold(true);
        label->setFont(font9);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label);

        te_infoExec = new QTextEdit(fr_infoLog);
        te_infoExec->setObjectName("te_infoExec");
        te_infoExec->setMinimumSize(QSize(0, 80));
        te_infoExec->setMaximumSize(QSize(16777215, 16777215));
        te_infoExec->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));

        verticalLayout_2->addWidget(te_infoExec);


        verticalLayout_6->addWidget(fr_infoLog);


        verticalLayout->addWidget(fr_estruturas);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        mainTab->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algo_Analitics", nullptr));
#if QT_CONFIG(tooltip)
        le_entryData->setToolTip(QCoreApplication::translate("MainWindow", "Algoritmo de ordena\303\247\303\243o", nullptr));
#endif // QT_CONFIG(tooltip)
        le_entryData->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrada", nullptr));
        cb_tipoEstrutura->setItemText(0, QCoreApplication::translate("MainWindow", "List", nullptr));
        cb_tipoEstrutura->setItemText(1, QCoreApplication::translate("MainWindow", "Tree", nullptr));
        cb_tipoEstrutura->setItemText(2, QCoreApplication::translate("MainWindow", "Graph", nullptr));

#if QT_CONFIG(tooltip)
        cb_tipoEstrutura->setToolTip(QCoreApplication::translate("MainWindow", "Tipo da estrutura a ser manuseada.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btn_deletar->setToolTip(QCoreApplication::translate("MainWindow", "Deleta uma estrutura.", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_deletar->setText(QCoreApplication::translate("MainWindow", "Deletar Estrutura", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Insertion", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Binary", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Bubble", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "Merge", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "Selection", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MainWindow", "Heap", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("MainWindow", "Quick", nullptr));

#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "Remove item da estrutura.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Remover item", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("MainWindow", "Ordanar a estrutura selecionada.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Ordenar", nullptr));
#if QT_CONFIG(tooltip)
        btn_buscar->setToolTip(QCoreApplication::translate("MainWindow", "Efetua a busca em uma estrutura.", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_buscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
#if QT_CONFIG(tooltip)
        btn_inserir->setToolTip(QCoreApplication::translate("MainWindow", "Insere um item na estutura.", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_inserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
        mainTab->setTabText(mainTab->indexOf(output_tab), QCoreApplication::translate("MainWindow", "OutPut", nullptr));
        mainTab->setTabText(mainTab->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Estruturas ativas", nullptr));
        mainTab->setTabText(mainTab->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Biblioteca", nullptr));
        te_dicionario->setPlainText(QCoreApplication::translate("MainWindow", "Dicionario de Estuturas", nullptr));
        mainTab->setTabText(mainTab->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajuda", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "N\302\272 V:", nullptr));
        cb_tipoGrafo->setItemText(0, QCoreApplication::translate("MainWindow", "Ponderado", nullptr));
        cb_tipoGrafo->setItemText(1, QCoreApplication::translate("MainWindow", "Ponderado Direcionado", nullptr));
        cb_tipoGrafo->setItemText(2, QCoreApplication::translate("MainWindow", "Direcionado", nullptr));

        btn_geraGrafo->setText(QCoreApplication::translate("MainWindow", "Gerar Grafo", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "N\303\263s:", nullptr));
        comboBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Tipo \303\201rvore", nullptr));
        btn_geraArvore->setText(QCoreApplication::translate("MainWindow", "Gerar Arvore", nullptr));
        le_numItems->setPlaceholderText(QCoreApplication::translate("MainWindow", "N\302\272 itens", nullptr));
        btn_geraLista->setText(QCoreApplication::translate("MainWindow", "Gerar Lista", nullptr));
        btn_reset->setText(QCoreApplication::translate("MainWindow", "Clear Output", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Info. da Execu\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
