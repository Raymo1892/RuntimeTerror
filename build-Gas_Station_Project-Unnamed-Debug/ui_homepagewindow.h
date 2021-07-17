/********************************************************************************
** Form generated from reading UI file 'homepagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEWINDOW_H
#define UI_HOMEPAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomepageWindow
{
public:
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionsave_as;
    QWidget *centralwidget;
    QFrame *right_frame;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *right_frame_2;
    QFrame *Top_frame;
    QLabel *rtgLabel;
    QStackedWidget *stackedWidget;
    QWidget *make_sale_page;
    QLabel *makeSaleLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *gasVerticalLayout;
    QPushButton *unleadedButton;
    QPushButton *premiumButton;
    QPushButton *dieselButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *foodVerticalLayout;
    QPushButton *grillItemButton;
    QPushButton *chipsButton;
    QPushButton *candyButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *drinksVerticalLayout;
    QPushButton *fountainDrinkButton;
    QPushButton *bottledBevButton;
    QPushButton *coffeeButton;
    QLabel *cartItemsLabel;
    QWidget *layoutWidget;
    QHBoxLayout *categoriesHorizLayout;
    QLabel *gasLabel;
    QLabel *foodLabel;
    QLabel *drinksLabel;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *cartDisplay;
    QLineEdit *totalBoxDisplay;
    QPushButton *clearCartButton;
    QWidget *account_Homepage;
    QPushButton *ChangePasswordButton;
    QPushButton *addUserButton;
    QPushButton *removeUserButton;
    QWidget *changeUserPasswordPage;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *accountsGridLayout_3;
    QLabel *newPassLabel_3;
    QLineEdit *usernameLineEdit_11;
    QLabel *usernameLabel_3;
    QLineEdit *newPassLineEdit_3;
    QPushButton *pushButton_ChangeEmployeePassword_3;
    QPushButton *returnToAccountHome;
    QLabel *changePasswordLabel;
    QWidget *addUserPage;
    QLabel *addUserLabel_2;
    QPushButton *returnToAccountHome_2;
    QGroupBox *groupBox;
    QLabel *addUserLabel_3;
    QLineEdit *lineEdit;
    QWidget *deleteUserPage;
    QLabel *RemoveUserLabel_2;
    QPushButton *returnToAccountHome_3;
    QWidget *Inventory_page;
    QLabel *inventoryPageLabel;
    QPushButton *inventoryButton_page;
    QPushButton *returnButton_3;
    QPushButton *pushButton_3;
    QGroupBox *AvailableStocks;
    QLabel *cartDisplay_2;
    QLineEdit *usernameLineEdit_4;
    QLabel *Search;
    QPushButton *Refresh_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QPushButton *Add;
    QPushButton *Update;
    QLabel *Product;
    QLabel *TransactionType;
    QLineEdit *usernameLineEdit_7;
    QLineEdit *usernameLineEdit_6;
    QLabel *Date;
    QLineEdit *usernameLineEdit_5;
    QLabel *Date_2;
    QLabel *Date_3;
    QLineEdit *usernameLineEdit_9;
    QLineEdit *usernameLineEdit_8;
    QGroupBox *ShowTransaction;
    QRadioButton *Allradiobutton;
    QRadioButton *PurchaseRadiobutton;
    QRadioButton *SaleRadioButton;
    QListView *listView;
    QScrollBar *verticalScrollBar;
    QPushButton *Extract;
    QLabel *S;
    QGroupBox *groupBox_6;
    QLineEdit *usernameLineEdit_3;
    QLineEdit *usernameLineEdit_2;
    QLabel *Startdate;
    QLabel *Enddate;
    QPushButton *Refresh;
    QPushButton *Purchase;
    QPushButton *InventoryAmt;
    QPushButton *InventoryQty;
    QPushButton *Profit;
    QPushButton *Sale;
    QPushButton *Extract_2;
    QWidget *audit_page;
    QLabel *auditPageLabel;
    QPushButton *viewAuditButton;
    QPushButton *returnButton;
    QWidget *settings_page;
    QLabel *settingsPageLabel;
    QWidget *help_page;
    QLabel *helpPageLabel;
    QFrame *left_frame;
    QVBoxLayout *verticalLayout;
    QPushButton *homeButton;
    QPushButton *accountButton;
    QPushButton *inventoryButton;
    QPushButton *auditButton;
    QPushButton *settingButton;
    QPushButton *helpButton;
    QPushButton *logOutButton;

    void setupUi(QMainWindow *HomepageWindow)
    {
        if (HomepageWindow->objectName().isEmpty())
            HomepageWindow->setObjectName(QString::fromUtf8("HomepageWindow"));
        HomepageWindow->resize(1250, 700);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        HomepageWindow->setFont(font);
        HomepageWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 85, 255)"));
        actionopen = new QAction(HomepageWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionsave = new QAction(HomepageWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionsave_as = new QAction(HomepageWindow);
        actionsave_as->setObjectName(QString::fromUtf8("actionsave_as"));
        centralwidget = new QWidget(HomepageWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        right_frame = new QFrame(centralwidget);
        right_frame->setObjectName(QString::fromUtf8("right_frame"));
        right_frame->setGeometry(QRect(1670, 200, 41, 761));
        right_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        right_frame->setFrameShape(QFrame::StyledPanel);
        right_frame->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(150, 960, 1571, 41));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(150, 960, 1571, 41));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        right_frame_2 = new QFrame(centralwidget);
        right_frame_2->setObjectName(QString::fromUtf8("right_frame_2"));
        right_frame_2->setGeometry(QRect(1670, 200, 41, 761));
        right_frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        right_frame_2->setFrameShape(QFrame::StyledPanel);
        right_frame_2->setFrameShadow(QFrame::Raised);
        Top_frame = new QFrame(centralwidget);
        Top_frame->setObjectName(QString::fromUtf8("Top_frame"));
        Top_frame->setGeometry(QRect(150, 0, 1561, 201));
        Top_frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color:rgb(63, 36, 79)\n"
"}"));
        Top_frame->setFrameShape(QFrame::StyledPanel);
        Top_frame->setFrameShadow(QFrame::Raised);
        rtgLabel = new QLabel(Top_frame);
        rtgLabel->setObjectName(QString::fromUtf8("rtgLabel"));
        rtgLabel->setGeometry(QRect(0, 0, 621, 71));
        rtgLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(150, 120, 1521, 931));
        stackedWidget->setBaseSize(QSize(3, 3));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 127, 145);\n"
"color: rgb(0, 0, 0);"));
        make_sale_page = new QWidget();
        make_sale_page->setObjectName(QString::fromUtf8("make_sale_page"));
        makeSaleLabel = new QLabel(make_sale_page);
        makeSaleLabel->setObjectName(QString::fromUtf8("makeSaleLabel"));
        makeSaleLabel->setGeometry(QRect(0, -10, 261, 81));
        makeSaleLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 87 8pt \"Segoe UI Black\";"));
        verticalLayoutWidget = new QWidget(make_sale_page);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 200, 160, 231));
        gasVerticalLayout = new QVBoxLayout(verticalLayoutWidget);
        gasVerticalLayout->setObjectName(QString::fromUtf8("gasVerticalLayout"));
        gasVerticalLayout->setContentsMargins(0, 0, 0, 0);
        unleadedButton = new QPushButton(verticalLayoutWidget);
        unleadedButton->setObjectName(QString::fromUtf8("unleadedButton"));
        unleadedButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        gasVerticalLayout->addWidget(unleadedButton);

        premiumButton = new QPushButton(verticalLayoutWidget);
        premiumButton->setObjectName(QString::fromUtf8("premiumButton"));
        premiumButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        gasVerticalLayout->addWidget(premiumButton);

        dieselButton = new QPushButton(verticalLayoutWidget);
        dieselButton->setObjectName(QString::fromUtf8("dieselButton"));
        dieselButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        gasVerticalLayout->addWidget(dieselButton);

        verticalLayoutWidget_2 = new QWidget(make_sale_page);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(240, 200, 160, 231));
        foodVerticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        foodVerticalLayout->setObjectName(QString::fromUtf8("foodVerticalLayout"));
        foodVerticalLayout->setContentsMargins(0, 0, 0, 0);
        grillItemButton = new QPushButton(verticalLayoutWidget_2);
        grillItemButton->setObjectName(QString::fromUtf8("grillItemButton"));
        grillItemButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        foodVerticalLayout->addWidget(grillItemButton);

        chipsButton = new QPushButton(verticalLayoutWidget_2);
        chipsButton->setObjectName(QString::fromUtf8("chipsButton"));
        chipsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        foodVerticalLayout->addWidget(chipsButton);

        candyButton = new QPushButton(verticalLayoutWidget_2);
        candyButton->setObjectName(QString::fromUtf8("candyButton"));
        candyButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        foodVerticalLayout->addWidget(candyButton);

        verticalLayoutWidget_3 = new QWidget(make_sale_page);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(410, 200, 160, 231));
        drinksVerticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        drinksVerticalLayout->setObjectName(QString::fromUtf8("drinksVerticalLayout"));
        drinksVerticalLayout->setContentsMargins(0, 0, 0, 0);
        fountainDrinkButton = new QPushButton(verticalLayoutWidget_3);
        fountainDrinkButton->setObjectName(QString::fromUtf8("fountainDrinkButton"));
        fountainDrinkButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        drinksVerticalLayout->addWidget(fountainDrinkButton);

        bottledBevButton = new QPushButton(verticalLayoutWidget_3);
        bottledBevButton->setObjectName(QString::fromUtf8("bottledBevButton"));
        bottledBevButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        drinksVerticalLayout->addWidget(bottledBevButton);

        coffeeButton = new QPushButton(verticalLayoutWidget_3);
        coffeeButton->setObjectName(QString::fromUtf8("coffeeButton"));
        coffeeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        drinksVerticalLayout->addWidget(coffeeButton);

        cartItemsLabel = new QLabel(make_sale_page);
        cartItemsLabel->setObjectName(QString::fromUtf8("cartItemsLabel"));
        cartItemsLabel->setGeometry(QRect(670, 160, 271, 31));
        cartItemsLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 87 8pt \"Segoe UI Black\";"));
        layoutWidget = new QWidget(make_sale_page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 160, 501, 40));
        categoriesHorizLayout = new QHBoxLayout(layoutWidget);
        categoriesHorizLayout->setObjectName(QString::fromUtf8("categoriesHorizLayout"));
        categoriesHorizLayout->setContentsMargins(0, 0, 0, 0);
        gasLabel = new QLabel(layoutWidget);
        gasLabel->setObjectName(QString::fromUtf8("gasLabel"));
        gasLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        categoriesHorizLayout->addWidget(gasLabel);

        foodLabel = new QLabel(layoutWidget);
        foodLabel->setObjectName(QString::fromUtf8("foodLabel"));
        foodLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        categoriesHorizLayout->addWidget(foodLabel);

        drinksLabel = new QLabel(layoutWidget);
        drinksLabel->setObjectName(QString::fromUtf8("drinksLabel"));
        drinksLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        categoriesHorizLayout->addWidget(drinksLabel);

        layoutWidget_2 = new QWidget(make_sale_page);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(670, 200, 271, 231));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        cartDisplay = new QLabel(layoutWidget_2);
        cartDisplay->setObjectName(QString::fromUtf8("cartDisplay"));
        cartDisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cartDisplay->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        verticalLayout_3->addWidget(cartDisplay);

        totalBoxDisplay = new QLineEdit(layoutWidget_2);
        totalBoxDisplay->setObjectName(QString::fromUtf8("totalBoxDisplay"));
        totalBoxDisplay->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(0, 0, 0);"));
        totalBoxDisplay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(totalBoxDisplay);

        clearCartButton = new QPushButton(layoutWidget_2);
        clearCartButton->setObjectName(QString::fromUtf8("clearCartButton"));
        clearCartButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        verticalLayout_3->addWidget(clearCartButton);

        stackedWidget->addWidget(make_sale_page);
        account_Homepage = new QWidget();
        account_Homepage->setObjectName(QString::fromUtf8("account_Homepage"));
        account_Homepage->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 127, 145)"));
        ChangePasswordButton = new QPushButton(account_Homepage);
        ChangePasswordButton->setObjectName(QString::fromUtf8("ChangePasswordButton"));
        ChangePasswordButton->setEnabled(true);
        ChangePasswordButton->setGeometry(QRect(420, 70, 291, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Black"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(10);
        ChangePasswordButton->setFont(font1);
        ChangePasswordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 20pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        addUserButton = new QPushButton(account_Homepage);
        addUserButton->setObjectName(QString::fromUtf8("addUserButton"));
        addUserButton->setEnabled(true);
        addUserButton->setGeometry(QRect(420, 230, 291, 91));
        addUserButton->setFont(font1);
        addUserButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 20pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        removeUserButton = new QPushButton(account_Homepage);
        removeUserButton->setObjectName(QString::fromUtf8("removeUserButton"));
        removeUserButton->setEnabled(true);
        removeUserButton->setGeometry(QRect(420, 390, 291, 91));
        removeUserButton->setFont(font1);
        removeUserButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 20pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        stackedWidget->addWidget(account_Homepage);
        changeUserPasswordPage = new QWidget();
        changeUserPasswordPage->setObjectName(QString::fromUtf8("changeUserPasswordPage"));
        groupBox_2 = new QGroupBox(changeUserPasswordPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(390, 120, 351, 231));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        gridLayoutWidget_3 = new QWidget(groupBox_2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(-1, -1, 351, 231));
        accountsGridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        accountsGridLayout_3->setObjectName(QString::fromUtf8("accountsGridLayout_3"));
        accountsGridLayout_3->setContentsMargins(0, 0, 0, 0);
        newPassLabel_3 = new QLabel(gridLayoutWidget_3);
        newPassLabel_3->setObjectName(QString::fromUtf8("newPassLabel_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(newPassLabel_3->sizePolicy().hasHeightForWidth());
        newPassLabel_3->setSizePolicy(sizePolicy1);
        newPassLabel_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        accountsGridLayout_3->addWidget(newPassLabel_3, 1, 0, 1, 1);

        usernameLineEdit_11 = new QLineEdit(gridLayoutWidget_3);
        usernameLineEdit_11->setObjectName(QString::fromUtf8("usernameLineEdit_11"));
        usernameLineEdit_11->setEnabled(true);
        sizePolicy1.setHeightForWidth(usernameLineEdit_11->sizePolicy().hasHeightForWidth());
        usernameLineEdit_11->setSizePolicy(sizePolicy1);
        usernameLineEdit_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        accountsGridLayout_3->addWidget(usernameLineEdit_11, 0, 1, 1, 1);

        usernameLabel_3 = new QLabel(gridLayoutWidget_3);
        usernameLabel_3->setObjectName(QString::fromUtf8("usernameLabel_3"));
        sizePolicy1.setHeightForWidth(usernameLabel_3->sizePolicy().hasHeightForWidth());
        usernameLabel_3->setSizePolicy(sizePolicy1);
        usernameLabel_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        accountsGridLayout_3->addWidget(usernameLabel_3, 0, 0, 1, 1);

        newPassLineEdit_3 = new QLineEdit(gridLayoutWidget_3);
        newPassLineEdit_3->setObjectName(QString::fromUtf8("newPassLineEdit_3"));
        sizePolicy1.setHeightForWidth(newPassLineEdit_3->sizePolicy().hasHeightForWidth());
        newPassLineEdit_3->setSizePolicy(sizePolicy1);
        newPassLineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        accountsGridLayout_3->addWidget(newPassLineEdit_3, 1, 1, 1, 1);

        pushButton_ChangeEmployeePassword_3 = new QPushButton(gridLayoutWidget_3);
        pushButton_ChangeEmployeePassword_3->setObjectName(QString::fromUtf8("pushButton_ChangeEmployeePassword_3"));
        pushButton_ChangeEmployeePassword_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        accountsGridLayout_3->addWidget(pushButton_ChangeEmployeePassword_3, 2, 0, 1, 2);

        returnToAccountHome = new QPushButton(changeUserPasswordPage);
        returnToAccountHome->setObjectName(QString::fromUtf8("returnToAccountHome"));
        returnToAccountHome->setGeometry(QRect(500, 420, 141, 18));
        returnToAccountHome->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        changePasswordLabel = new QLabel(changeUserPasswordPage);
        changePasswordLabel->setObjectName(QString::fromUtf8("changePasswordLabel"));
        changePasswordLabel->setGeometry(QRect(0, 0, 270, 50));
        changePasswordLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        stackedWidget->addWidget(changeUserPasswordPage);
        addUserPage = new QWidget();
        addUserPage->setObjectName(QString::fromUtf8("addUserPage"));
        addUserLabel_2 = new QLabel(addUserPage);
        addUserLabel_2->setObjectName(QString::fromUtf8("addUserLabel_2"));
        addUserLabel_2->setGeometry(QRect(0, 0, 270, 50));
        addUserLabel_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        returnToAccountHome_2 = new QPushButton(addUserPage);
        returnToAccountHome_2->setObjectName(QString::fromUtf8("returnToAccountHome_2"));
        returnToAccountHome_2->setGeometry(QRect(490, 370, 141, 18));
        returnToAccountHome_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        groupBox = new QGroupBox(addUserPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(390, 120, 341, 191));
        groupBox->setCheckable(false);
        addUserLabel_3 = new QLabel(groupBox);
        addUserLabel_3->setObjectName(QString::fromUtf8("addUserLabel_3"));
        addUserLabel_3->setGeometry(QRect(-10, 0, 361, 201));
        addUserLabel_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 90, 241, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        lineEdit->setPalette(palette);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 18pt \".AppleSystemUIFont\";"));
        stackedWidget->addWidget(addUserPage);
        deleteUserPage = new QWidget();
        deleteUserPage->setObjectName(QString::fromUtf8("deleteUserPage"));
        RemoveUserLabel_2 = new QLabel(deleteUserPage);
        RemoveUserLabel_2->setObjectName(QString::fromUtf8("RemoveUserLabel_2"));
        RemoveUserLabel_2->setGeometry(QRect(0, 0, 270, 50));
        RemoveUserLabel_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        returnToAccountHome_3 = new QPushButton(deleteUserPage);
        returnToAccountHome_3->setObjectName(QString::fromUtf8("returnToAccountHome_3"));
        returnToAccountHome_3->setGeometry(QRect(490, 370, 141, 18));
        returnToAccountHome_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        stackedWidget->addWidget(deleteUserPage);
        Inventory_page = new QWidget();
        Inventory_page->setObjectName(QString::fromUtf8("Inventory_page"));
        inventoryPageLabel = new QLabel(Inventory_page);
        inventoryPageLabel->setObjectName(QString::fromUtf8("inventoryPageLabel"));
        inventoryPageLabel->setGeometry(QRect(0, 0, 341, 50));
        inventoryPageLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        inventoryButton_page = new QPushButton(Inventory_page);
        inventoryButton_page->setObjectName(QString::fromUtf8("inventoryButton_page"));
        inventoryButton_page->setGeometry(QRect(990, 0, 111, 26));
        inventoryButton_page->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        returnButton_3 = new QPushButton(Inventory_page);
        returnButton_3->setObjectName(QString::fromUtf8("returnButton_3"));
        returnButton_3->setGeometry(QRect(990, 40, 111, 26));
        returnButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        pushButton_3 = new QPushButton(Inventory_page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(880, 10, 75, 51));
        AvailableStocks = new QGroupBox(Inventory_page);
        AvailableStocks->setObjectName(QString::fromUtf8("AvailableStocks"));
        AvailableStocks->setGeometry(QRect(20, 220, 341, 321));
        cartDisplay_2 = new QLabel(AvailableStocks);
        cartDisplay_2->setObjectName(QString::fromUtf8("cartDisplay_2"));
        cartDisplay_2->setGeometry(QRect(10, 60, 321, 251));
        cartDisplay_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cartDisplay_2->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        usernameLineEdit_4 = new QLineEdit(AvailableStocks);
        usernameLineEdit_4->setObjectName(QString::fromUtf8("usernameLineEdit_4"));
        usernameLineEdit_4->setEnabled(true);
        usernameLineEdit_4->setGeometry(QRect(50, 20, 111, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_4->sizePolicy().hasHeightForWidth());
        usernameLineEdit_4->setSizePolicy(sizePolicy1);
        usernameLineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Search = new QLabel(AvailableStocks);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(10, 20, 41, 16));
        sizePolicy1.setHeightForWidth(Search->sizePolicy().hasHeightForWidth());
        Search->setSizePolicy(sizePolicy1);
        Search->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        Refresh_2 = new QPushButton(AvailableStocks);
        Refresh_2->setObjectName(QString::fromUtf8("Refresh_2"));
        Refresh_2->setGeometry(QRect(160, 20, 91, 26));
        Refresh_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        groupBox_3 = new QGroupBox(Inventory_page);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(379, 220, 701, 321));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 20, 671, 91));
        Add = new QPushButton(groupBox_4);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(430, 60, 111, 26));
        Add->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Update = new QPushButton(groupBox_4);
        Update->setObjectName(QString::fromUtf8("Update"));
        Update->setGeometry(QRect(540, 60, 111, 26));
        Update->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Product = new QLabel(groupBox_4);
        Product->setObjectName(QString::fromUtf8("Product"));
        Product->setGeometry(QRect(10, 30, 60, 13));
        sizePolicy1.setHeightForWidth(Product->sizePolicy().hasHeightForWidth());
        Product->setSizePolicy(sizePolicy1);
        Product->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        TransactionType = new QLabel(groupBox_4);
        TransactionType->setObjectName(QString::fromUtf8("TransactionType"));
        TransactionType->setGeometry(QRect(10, 60, 91, 16));
        sizePolicy1.setHeightForWidth(TransactionType->sizePolicy().hasHeightForWidth());
        TransactionType->setSizePolicy(sizePolicy1);
        TransactionType->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        usernameLineEdit_7 = new QLineEdit(groupBox_4);
        usernameLineEdit_7->setObjectName(QString::fromUtf8("usernameLineEdit_7"));
        usernameLineEdit_7->setEnabled(true);
        usernameLineEdit_7->setGeometry(QRect(270, 30, 133, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_7->sizePolicy().hasHeightForWidth());
        usernameLineEdit_7->setSizePolicy(sizePolicy1);
        usernameLineEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        usernameLineEdit_6 = new QLineEdit(groupBox_4);
        usernameLineEdit_6->setObjectName(QString::fromUtf8("usernameLineEdit_6"));
        usernameLineEdit_6->setEnabled(true);
        usernameLineEdit_6->setGeometry(QRect(270, 60, 133, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_6->sizePolicy().hasHeightForWidth());
        usernameLineEdit_6->setSizePolicy(sizePolicy1);
        usernameLineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Date = new QLabel(groupBox_4);
        Date->setObjectName(QString::fromUtf8("Date"));
        Date->setGeometry(QRect(430, 30, 60, 13));
        sizePolicy1.setHeightForWidth(Date->sizePolicy().hasHeightForWidth());
        Date->setSizePolicy(sizePolicy1);
        Date->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        usernameLineEdit_5 = new QLineEdit(groupBox_4);
        usernameLineEdit_5->setObjectName(QString::fromUtf8("usernameLineEdit_5"));
        usernameLineEdit_5->setEnabled(true);
        usernameLineEdit_5->setGeometry(QRect(460, 30, 133, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_5->sizePolicy().hasHeightForWidth());
        usernameLineEdit_5->setSizePolicy(sizePolicy1);
        usernameLineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Date_2 = new QLabel(groupBox_4);
        Date_2->setObjectName(QString::fromUtf8("Date_2"));
        Date_2->setGeometry(QRect(240, 30, 31, 16));
        sizePolicy1.setHeightForWidth(Date_2->sizePolicy().hasHeightForWidth());
        Date_2->setSizePolicy(sizePolicy1);
        Date_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        Date_3 = new QLabel(groupBox_4);
        Date_3->setObjectName(QString::fromUtf8("Date_3"));
        Date_3->setGeometry(QRect(240, 60, 31, 16));
        sizePolicy1.setHeightForWidth(Date_3->sizePolicy().hasHeightForWidth());
        Date_3->setSizePolicy(sizePolicy1);
        Date_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        usernameLineEdit_9 = new QLineEdit(groupBox_4);
        usernameLineEdit_9->setObjectName(QString::fromUtf8("usernameLineEdit_9"));
        usernameLineEdit_9->setEnabled(true);
        usernameLineEdit_9->setGeometry(QRect(82, 30, 151, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_9->sizePolicy().hasHeightForWidth());
        usernameLineEdit_9->setSizePolicy(sizePolicy1);
        usernameLineEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        usernameLineEdit_8 = new QLineEdit(groupBox_4);
        usernameLineEdit_8->setObjectName(QString::fromUtf8("usernameLineEdit_8"));
        usernameLineEdit_8->setEnabled(true);
        usernameLineEdit_8->setGeometry(QRect(110, 60, 121, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_8->sizePolicy().hasHeightForWidth());
        usernameLineEdit_8->setSizePolicy(sizePolicy1);
        usernameLineEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ShowTransaction = new QGroupBox(groupBox_3);
        ShowTransaction->setObjectName(QString::fromUtf8("ShowTransaction"));
        ShowTransaction->setGeometry(QRect(20, 120, 281, 41));
        Allradiobutton = new QRadioButton(ShowTransaction);
        Allradiobutton->setObjectName(QString::fromUtf8("Allradiobutton"));
        Allradiobutton->setGeometry(QRect(10, 20, 82, 17));
        PurchaseRadiobutton = new QRadioButton(ShowTransaction);
        PurchaseRadiobutton->setObjectName(QString::fromUtf8("PurchaseRadiobutton"));
        PurchaseRadiobutton->setGeometry(QRect(110, 20, 82, 17));
        SaleRadioButton = new QRadioButton(ShowTransaction);
        SaleRadioButton->setObjectName(QString::fromUtf8("SaleRadioButton"));
        SaleRadioButton->setGeometry(QRect(210, 20, 61, 17));
        listView = new QListView(groupBox_3);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 170, 661, 131));
        verticalScrollBar = new QScrollBar(groupBox_3);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(660, 180, 20, 111));
        verticalScrollBar->setOrientation(Qt::Vertical);
        Extract = new QPushButton(groupBox_3);
        Extract->setObjectName(QString::fromUtf8("Extract"));
        Extract->setGeometry(QRect(310, 130, 111, 26));
        Extract->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        S = new QLabel(groupBox_3);
        S->setObjectName(QString::fromUtf8("S"));
        S->setGeometry(QRect(30, 180, 621, 121));
        S->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        S->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        groupBox_6 = new QGroupBox(Inventory_page);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 40, 631, 80));
        usernameLineEdit_3 = new QLineEdit(groupBox_6);
        usernameLineEdit_3->setObjectName(QString::fromUtf8("usernameLineEdit_3"));
        usernameLineEdit_3->setEnabled(true);
        usernameLineEdit_3->setGeometry(QRect(310, 30, 133, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_3->sizePolicy().hasHeightForWidth());
        usernameLineEdit_3->setSizePolicy(sizePolicy1);
        usernameLineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        usernameLineEdit_2 = new QLineEdit(groupBox_6);
        usernameLineEdit_2->setObjectName(QString::fromUtf8("usernameLineEdit_2"));
        usernameLineEdit_2->setEnabled(true);
        usernameLineEdit_2->setGeometry(QRect(70, 30, 133, 20));
        sizePolicy1.setHeightForWidth(usernameLineEdit_2->sizePolicy().hasHeightForWidth());
        usernameLineEdit_2->setSizePolicy(sizePolicy1);
        usernameLineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Startdate = new QLabel(groupBox_6);
        Startdate->setObjectName(QString::fromUtf8("Startdate"));
        Startdate->setGeometry(QRect(10, 30, 60, 13));
        sizePolicy1.setHeightForWidth(Startdate->sizePolicy().hasHeightForWidth());
        Startdate->setSizePolicy(sizePolicy1);
        Startdate->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        Enddate = new QLabel(groupBox_6);
        Enddate->setObjectName(QString::fromUtf8("Enddate"));
        Enddate->setGeometry(QRect(250, 30, 60, 13));
        sizePolicy1.setHeightForWidth(Enddate->sizePolicy().hasHeightForWidth());
        Enddate->setSizePolicy(sizePolicy1);
        Enddate->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        Refresh = new QPushButton(groupBox_6);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        Refresh->setGeometry(QRect(490, 30, 111, 26));
        Refresh->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Purchase = new QPushButton(Inventory_page);
        Purchase->setObjectName(QString::fromUtf8("Purchase"));
        Purchase->setGeometry(QRect(20, 140, 131, 55));
        Purchase->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Purchase->setIconSize(QSize(20, 20));
        InventoryAmt = new QPushButton(Inventory_page);
        InventoryAmt->setObjectName(QString::fromUtf8("InventoryAmt"));
        InventoryAmt->setGeometry(QRect(700, 140, 131, 55));
        InventoryAmt->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        InventoryAmt->setIconSize(QSize(20, 20));
        InventoryQty = new QPushButton(Inventory_page);
        InventoryQty->setObjectName(QString::fromUtf8("InventoryQty"));
        InventoryQty->setGeometry(QRect(530, 140, 131, 55));
        InventoryQty->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        InventoryQty->setIconSize(QSize(20, 20));
        Profit = new QPushButton(Inventory_page);
        Profit->setObjectName(QString::fromUtf8("Profit"));
        Profit->setGeometry(QRect(360, 140, 131, 55));
        Profit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Profit->setIconSize(QSize(20, 20));
        Sale = new QPushButton(Inventory_page);
        Sale->setObjectName(QString::fromUtf8("Sale"));
        Sale->setGeometry(QRect(190, 140, 131, 55));
        Sale->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Sale->setIconSize(QSize(20, 20));
        Extract_2 = new QPushButton(Inventory_page);
        Extract_2->setObjectName(QString::fromUtf8("Extract_2"));
        Extract_2->setGeometry(QRect(270, 240, 81, 26));
        Extract_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        stackedWidget->addWidget(Inventory_page);
        audit_page = new QWidget();
        audit_page->setObjectName(QString::fromUtf8("audit_page"));
        auditPageLabel = new QLabel(audit_page);
        auditPageLabel->setObjectName(QString::fromUtf8("auditPageLabel"));
        auditPageLabel->setGeometry(QRect(0, 0, 281, 50));
        auditPageLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        viewAuditButton = new QPushButton(audit_page);
        viewAuditButton->setObjectName(QString::fromUtf8("viewAuditButton"));
        viewAuditButton->setGeometry(QRect(990, 0, 111, 26));
        viewAuditButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        returnButton = new QPushButton(audit_page);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(990, 40, 111, 26));
        returnButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        stackedWidget->addWidget(audit_page);
        settings_page = new QWidget();
        settings_page->setObjectName(QString::fromUtf8("settings_page"));
        settingsPageLabel = new QLabel(settings_page);
        settingsPageLabel->setObjectName(QString::fromUtf8("settingsPageLabel"));
        settingsPageLabel->setGeometry(QRect(0, 0, 270, 50));
        settingsPageLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        stackedWidget->addWidget(settings_page);
        help_page = new QWidget();
        help_page->setObjectName(QString::fromUtf8("help_page"));
        helpPageLabel = new QLabel(help_page);
        helpPageLabel->setObjectName(QString::fromUtf8("helpPageLabel"));
        helpPageLabel->setGeometry(QRect(0, 0, 163, 50));
        helpPageLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        helpPageLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        stackedWidget->addWidget(help_page);
        left_frame = new QFrame(centralwidget);
        left_frame->setObjectName(QString::fromUtf8("left_frame"));
        left_frame->setGeometry(QRect(0, 0, 151, 700));
        left_frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color:rgb(63, 36, 79);\n"
"}\n"
"QPushButton{\n"
"padding: 20px 10px;\n"
"boarder: none;\n"
"boarder-radius: 10px;\n"
"background-color: #000;\n"
"color: #fff;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0,92,157);\n"
"}"));
        left_frame->setFrameShape(QFrame::StyledPanel);
        left_frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(left_frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        homeButton = new QPushButton(left_frame);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        homeButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(homeButton);

        accountButton = new QPushButton(left_frame);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));
        accountButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        verticalLayout->addWidget(accountButton);

        inventoryButton = new QPushButton(left_frame);
        inventoryButton->setObjectName(QString::fromUtf8("inventoryButton"));
        inventoryButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        verticalLayout->addWidget(inventoryButton);

        auditButton = new QPushButton(left_frame);
        auditButton->setObjectName(QString::fromUtf8("auditButton"));
        auditButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        verticalLayout->addWidget(auditButton);

        settingButton = new QPushButton(left_frame);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        verticalLayout->addWidget(settingButton);

        helpButton = new QPushButton(left_frame);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        verticalLayout->addWidget(helpButton);

        logOutButton = new QPushButton(left_frame);
        logOutButton->setObjectName(QString::fromUtf8("logOutButton"));
        logOutButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        logOutButton->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(logOutButton);

        HomepageWindow->setCentralWidget(centralwidget);

        retranslateUi(HomepageWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(HomepageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HomepageWindow)
    {
        HomepageWindow->setWindowTitle(QCoreApplication::translate("HomepageWindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("HomepageWindow", "open", nullptr));
        actionsave->setText(QCoreApplication::translate("HomepageWindow", "save", nullptr));
        actionsave_as->setText(QCoreApplication::translate("HomepageWindow", "save as", nullptr));
        rtgLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:28pt; color:#00ffff;\">Welcome to RTG Fuel</span></p></body></html>", nullptr));
        makeSaleLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Make Sale Page</span></p></body></html>", nullptr));
        unleadedButton->setText(QCoreApplication::translate("HomepageWindow", "Unleaded", nullptr));
        premiumButton->setText(QCoreApplication::translate("HomepageWindow", "Premium", nullptr));
        dieselButton->setText(QCoreApplication::translate("HomepageWindow", "Diesel", nullptr));
        grillItemButton->setText(QCoreApplication::translate("HomepageWindow", "Grill Item", nullptr));
        chipsButton->setText(QCoreApplication::translate("HomepageWindow", "Chips", nullptr));
        candyButton->setText(QCoreApplication::translate("HomepageWindow", "Candy", nullptr));
        fountainDrinkButton->setText(QCoreApplication::translate("HomepageWindow", "Fountain Drink", nullptr));
        bottledBevButton->setText(QCoreApplication::translate("HomepageWindow", "Bottled Beverage", nullptr));
        coffeeButton->setText(QCoreApplication::translate("HomepageWindow", "Coffee", nullptr));
        cartItemsLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#00ffff;\">Cart Items</span></p></body></html>", nullptr));
        gasLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#00ffff;\">Gas</span></p></body></html>", nullptr));
        foodLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#00ffff;\">Food</span></p></body></html>", nullptr));
        drinksLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#00ffff;\">Drinks</span></p></body></html>", nullptr));
        cartDisplay->setText(QString());
        totalBoxDisplay->setText(QCoreApplication::translate("HomepageWindow", "$0.00", nullptr));
        clearCartButton->setText(QCoreApplication::translate("HomepageWindow", "Clear Cart", nullptr));
        ChangePasswordButton->setText(QCoreApplication::translate("HomepageWindow", "Change User Password", nullptr));
        addUserButton->setText(QCoreApplication::translate("HomepageWindow", "Add User", nullptr));
        removeUserButton->setText(QCoreApplication::translate("HomepageWindow", "Remove User", nullptr));
        groupBox_2->setTitle(QString());
        newPassLabel_3->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">New Password:</span></p></body></html>", nullptr));
        usernameLabel_3->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Username: </span></p></body></html>", nullptr));
        pushButton_ChangeEmployeePassword_3->setText(QCoreApplication::translate("HomepageWindow", "Change Employee Password", nullptr));
        returnToAccountHome->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        changePasswordLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Change User Password</span></p></body></html>", nullptr));
        addUserLabel_2->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Add User</span></p></body></html>", nullptr));
        returnToAccountHome_2->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        groupBox->setTitle(QString());
        addUserLabel_3->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#00ffff;\">Please enter the username of the user </span></p><p align=\"center\"><span style=\" font-size:18pt; color:#00ffff;\">you would like to remove below.</span></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p></body></html>", nullptr));
        lineEdit->setText(QString());
        RemoveUserLabel_2->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Remove User</span></p></body></html>", nullptr));
        returnToAccountHome_3->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        inventoryPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">View Inventory Page</span></p></body></html>", nullptr));
        inventoryButton_page->setText(QCoreApplication::translate("HomepageWindow", "View Inventory", nullptr));
        returnButton_3->setText(QCoreApplication::translate("HomepageWindow", "Return to Home", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HomepageWindow", "SAVE", nullptr));
        AvailableStocks->setTitle(QCoreApplication::translate("HomepageWindow", "Available Stocks", nullptr));
        cartDisplay_2->setText(QString());
        Search->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Search</span></p></body></html>", nullptr));
        Refresh_2->setText(QCoreApplication::translate("HomepageWindow", "Refresh", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("HomepageWindow", "Sale/Purchase Transactions", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("HomepageWindow", "Add/ Update", nullptr));
        Add->setText(QCoreApplication::translate("HomepageWindow", "Add", nullptr));
        Update->setText(QCoreApplication::translate("HomepageWindow", "Update", nullptr));
        Product->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Product</span></p></body></html>", nullptr));
        TransactionType->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Transaction Type</span></p></body></html>", nullptr));
        Date->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Date</span></p></body></html>", nullptr));
        Date_2->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Qty.</span></p></body></html>", nullptr));
        Date_3->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Rate</span></p></body></html>", nullptr));
        ShowTransaction->setTitle(QCoreApplication::translate("HomepageWindow", "Show Transactions", nullptr));
        Allradiobutton->setText(QCoreApplication::translate("HomepageWindow", "All", nullptr));
        PurchaseRadiobutton->setText(QCoreApplication::translate("HomepageWindow", "Purchase", nullptr));
        SaleRadioButton->setText(QCoreApplication::translate("HomepageWindow", "Sale", nullptr));
        Extract->setText(QCoreApplication::translate("HomepageWindow", " Extract", nullptr));
        S->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("HomepageWindow", "Date Range", nullptr));
        Startdate->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Start Date</span></p></body></html>", nullptr));
        Enddate->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">End date</span></p></body></html>", nullptr));
        Refresh->setText(QCoreApplication::translate("HomepageWindow", "Refresh", nullptr));
        Purchase->setText(QCoreApplication::translate("HomepageWindow", "Purchase", nullptr));
        InventoryAmt->setText(QCoreApplication::translate("HomepageWindow", "Inventory Amt.", nullptr));
        InventoryQty->setText(QCoreApplication::translate("HomepageWindow", "Inventory Qty.", nullptr));
        Profit->setText(QCoreApplication::translate("HomepageWindow", "Profit", nullptr));
        Sale->setText(QCoreApplication::translate("HomepageWindow", "Sale", nullptr));
        Extract_2->setText(QCoreApplication::translate("HomepageWindow", "Extract", nullptr));
        auditPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Daily Audit Page</span></p></body></html>", nullptr));
        viewAuditButton->setText(QCoreApplication::translate("HomepageWindow", "View Audit", nullptr));
        returnButton->setText(QCoreApplication::translate("HomepageWindow", "Return to Home", nullptr));
        settingsPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Settings Page</span></p></body></html>", nullptr));
        helpPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Help Page</span></p></body></html>", nullptr));
        homeButton->setText(QCoreApplication::translate("HomepageWindow", "Make Sale", nullptr));
        accountButton->setText(QCoreApplication::translate("HomepageWindow", "Accounts", nullptr));
        inventoryButton->setText(QCoreApplication::translate("HomepageWindow", " Inventory", nullptr));
        auditButton->setText(QCoreApplication::translate("HomepageWindow", "Daily Audit", nullptr));
        settingButton->setText(QCoreApplication::translate("HomepageWindow", "Settings", nullptr));
        helpButton->setText(QCoreApplication::translate("HomepageWindow", "Help", nullptr));
        logOutButton->setText(QCoreApplication::translate("HomepageWindow", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomepageWindow: public Ui_HomepageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEWINDOW_H
