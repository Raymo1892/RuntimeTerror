/********************************************************************************
** Form generated from reading UI file 'homepagewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEWINDOW_H
#define UI_HOMEPAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
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
    QGroupBox *changePassGroupBox;
    QWidget *gridLayoutWidget_3;
    QGridLayout *accountsGridLayout_3;
    QLineEdit *changePass_Password_LineEdit;
    QLabel *newPassLabel_3;
    QLineEdit *changePass_Username_LineEdit;
    QLabel *usernameLabel_3;
    QPushButton *pushButton_ChangeEmployeePassword;
    QPushButton *returnAccountsButton;
    QLabel *changePasswordLabel;
    QWidget *addUserPage;
    QLabel *addUserLabel_2;
    QGroupBox *addUserGroupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *addUserGridLayout;
    QPushButton *saveUserButton;
    QLabel *addUserLabelName;
    QLabel *addUserLabelPassword;
    QLineEdit *addUserLineEditPassword;
    QLabel *addUserLabelUsername;
    QLineEdit *addUserLineEditUsername;
    QLineEdit *addUserLineEditName;
    QPushButton *returnAccountsButton1;
    QWidget *deleteUserPage;
    QLabel *RemoveUserLabel_2;
    QGroupBox *removeUserGroupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *removeUserGridLayout;
    QLineEdit *removeUserPassLineEdit;
    QLineEdit *removeUserNameLineEdit;
    QLabel *removeUserPassLabel;
    QLabel *removeUserNameLabel;
    QPushButton *returnAccountsButton2;
    QPushButton *deleteUserButton;
    QWidget *Inventory_page;
    QLabel *inventoryPageLabel;
    QPushButton *returnFromInventoryButton;
    QPushButton *AddItem;
    QPushButton *Tableview;
    QPushButton *UpdateInventory;
    QPushButton *RemoveItem;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QLabel *label;
    QLabel *ItemID;
    QLineEdit *lineEdit;
    QLabel *Itemname;
    QLineEdit *lineEdit_2;
    QLabel *Itemprice;
    QLineEdit *lineEdit_3;
    QLabel *Description;
    QLineEdit *lineEdit_4;
    QLabel *Quantity;
    QLineEdit *lineEdit_5;
    QPushButton *Save;
    QWidget *page_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_5;
    QWidget *audit_page;
    QLabel *auditPageLabel;
    QPushButton *viewAuditButton;
    QPushButton *returnFromAuditButton;
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
        ChangePasswordButton->setGeometry(QRect(420, 70, 311, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        ChangePasswordButton->setFont(font1);
        ChangePasswordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 16pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        addUserButton = new QPushButton(account_Homepage);
        addUserButton->setObjectName(QString::fromUtf8("addUserButton"));
        addUserButton->setEnabled(true);
        addUserButton->setGeometry(QRect(420, 230, 311, 91));
        addUserButton->setFont(font1);
        addUserButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 16pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        removeUserButton = new QPushButton(account_Homepage);
        removeUserButton->setObjectName(QString::fromUtf8("removeUserButton"));
        removeUserButton->setEnabled(true);
        removeUserButton->setGeometry(QRect(420, 390, 311, 91));
        removeUserButton->setFont(font1);
        removeUserButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 16pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));
        stackedWidget->addWidget(account_Homepage);
        changeUserPasswordPage = new QWidget();
        changeUserPasswordPage->setObjectName(QString::fromUtf8("changeUserPasswordPage"));
        changePassGroupBox = new QGroupBox(changeUserPasswordPage);
        changePassGroupBox->setObjectName(QString::fromUtf8("changePassGroupBox"));
        changePassGroupBox->setEnabled(true);
        changePassGroupBox->setGeometry(QRect(330, 120, 431, 271));
        changePassGroupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        gridLayoutWidget_3 = new QWidget(changePassGroupBox);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 20, 371, 231));
        accountsGridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        accountsGridLayout_3->setObjectName(QString::fromUtf8("accountsGridLayout_3"));
        accountsGridLayout_3->setContentsMargins(0, 0, 0, 0);
        changePass_Password_LineEdit = new QLineEdit(gridLayoutWidget_3);
        changePass_Password_LineEdit->setObjectName(QString::fromUtf8("changePass_Password_LineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(changePass_Password_LineEdit->sizePolicy().hasHeightForWidth());
        changePass_Password_LineEdit->setSizePolicy(sizePolicy);
        changePass_Password_LineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        accountsGridLayout_3->addWidget(changePass_Password_LineEdit, 1, 1, 1, 1);

        newPassLabel_3 = new QLabel(gridLayoutWidget_3);
        newPassLabel_3->setObjectName(QString::fromUtf8("newPassLabel_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(newPassLabel_3->sizePolicy().hasHeightForWidth());
        newPassLabel_3->setSizePolicy(sizePolicy1);
        newPassLabel_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        accountsGridLayout_3->addWidget(newPassLabel_3, 1, 0, 1, 1);

        changePass_Username_LineEdit = new QLineEdit(gridLayoutWidget_3);
        changePass_Username_LineEdit->setObjectName(QString::fromUtf8("changePass_Username_LineEdit"));
        changePass_Username_LineEdit->setEnabled(true);
        sizePolicy.setHeightForWidth(changePass_Username_LineEdit->sizePolicy().hasHeightForWidth());
        changePass_Username_LineEdit->setSizePolicy(sizePolicy);
        changePass_Username_LineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        accountsGridLayout_3->addWidget(changePass_Username_LineEdit, 0, 1, 1, 1);

        usernameLabel_3 = new QLabel(gridLayoutWidget_3);
        usernameLabel_3->setObjectName(QString::fromUtf8("usernameLabel_3"));
        sizePolicy1.setHeightForWidth(usernameLabel_3->sizePolicy().hasHeightForWidth());
        usernameLabel_3->setSizePolicy(sizePolicy1);
        usernameLabel_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        accountsGridLayout_3->addWidget(usernameLabel_3, 0, 0, 1, 1);

        pushButton_ChangeEmployeePassword = new QPushButton(gridLayoutWidget_3);
        pushButton_ChangeEmployeePassword->setObjectName(QString::fromUtf8("pushButton_ChangeEmployeePassword"));
        pushButton_ChangeEmployeePassword->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        accountsGridLayout_3->addWidget(pushButton_ChangeEmployeePassword, 2, 1, 1, 1);

        returnAccountsButton = new QPushButton(gridLayoutWidget_3);
        returnAccountsButton->setObjectName(QString::fromUtf8("returnAccountsButton"));
        returnAccountsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        accountsGridLayout_3->addWidget(returnAccountsButton, 3, 1, 1, 1);

        changePasswordLabel = new QLabel(changeUserPasswordPage);
        changePasswordLabel->setObjectName(QString::fromUtf8("changePasswordLabel"));
        changePasswordLabel->setGeometry(QRect(0, 0, 371, 50));
        changePasswordLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        stackedWidget->addWidget(changeUserPasswordPage);
        addUserPage = new QWidget();
        addUserPage->setObjectName(QString::fromUtf8("addUserPage"));
        addUserLabel_2 = new QLabel(addUserPage);
        addUserLabel_2->setObjectName(QString::fromUtf8("addUserLabel_2"));
        addUserLabel_2->setGeometry(QRect(0, 0, 270, 50));
        addUserLabel_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        addUserGroupBox = new QGroupBox(addUserPage);
        addUserGroupBox->setObjectName(QString::fromUtf8("addUserGroupBox"));
        addUserGroupBox->setGeometry(QRect(330, 120, 431, 271));
        addUserGroupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        gridLayoutWidget_2 = new QWidget(addUserGroupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(39, 29, 361, 211));
        addUserGridLayout = new QGridLayout(gridLayoutWidget_2);
        addUserGridLayout->setObjectName(QString::fromUtf8("addUserGridLayout"));
        addUserGridLayout->setContentsMargins(0, 0, 0, 0);
        saveUserButton = new QPushButton(gridLayoutWidget_2);
        saveUserButton->setObjectName(QString::fromUtf8("saveUserButton"));
        saveUserButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        addUserGridLayout->addWidget(saveUserButton, 3, 1, 1, 1);

        addUserLabelName = new QLabel(gridLayoutWidget_2);
        addUserLabelName->setObjectName(QString::fromUtf8("addUserLabelName"));
        addUserLabelName->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(addUserLabelName, 0, 0, 1, 1);

        addUserLabelPassword = new QLabel(gridLayoutWidget_2);
        addUserLabelPassword->setObjectName(QString::fromUtf8("addUserLabelPassword"));
        addUserLabelPassword->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(addUserLabelPassword, 2, 0, 1, 1);

        addUserLineEditPassword = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditPassword->setObjectName(QString::fromUtf8("addUserLineEditPassword"));
        addUserLineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditPassword, 2, 1, 1, 1);

        addUserLabelUsername = new QLabel(gridLayoutWidget_2);
        addUserLabelUsername->setObjectName(QString::fromUtf8("addUserLabelUsername"));
        addUserLabelUsername->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(addUserLabelUsername, 1, 0, 1, 1);

        addUserLineEditUsername = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditUsername->setObjectName(QString::fromUtf8("addUserLineEditUsername"));
        addUserLineEditUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditUsername, 1, 1, 1, 1);

        addUserLineEditName = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditName->setObjectName(QString::fromUtf8("addUserLineEditName"));
        addUserLineEditName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditName, 0, 1, 1, 1);

        returnAccountsButton1 = new QPushButton(gridLayoutWidget_2);
        returnAccountsButton1->setObjectName(QString::fromUtf8("returnAccountsButton1"));
        returnAccountsButton1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        addUserGridLayout->addWidget(returnAccountsButton1, 4, 1, 1, 1);

        stackedWidget->addWidget(addUserPage);
        deleteUserPage = new QWidget();
        deleteUserPage->setObjectName(QString::fromUtf8("deleteUserPage"));
        RemoveUserLabel_2 = new QLabel(deleteUserPage);
        RemoveUserLabel_2->setObjectName(QString::fromUtf8("RemoveUserLabel_2"));
        RemoveUserLabel_2->setGeometry(QRect(0, 0, 270, 50));
        RemoveUserLabel_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        removeUserGroupBox = new QGroupBox(deleteUserPage);
        removeUserGroupBox->setObjectName(QString::fromUtf8("removeUserGroupBox"));
        removeUserGroupBox->setGeometry(QRect(330, 120, 431, 271));
        removeUserGroupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        gridLayoutWidget = new QWidget(removeUserGroupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 361, 221));
        removeUserGridLayout = new QGridLayout(gridLayoutWidget);
        removeUserGridLayout->setObjectName(QString::fromUtf8("removeUserGridLayout"));
        removeUserGridLayout->setContentsMargins(0, 0, 0, 0);
        removeUserPassLineEdit = new QLineEdit(gridLayoutWidget);
        removeUserPassLineEdit->setObjectName(QString::fromUtf8("removeUserPassLineEdit"));
        removeUserPassLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        removeUserGridLayout->addWidget(removeUserPassLineEdit, 1, 1, 1, 1);

        removeUserNameLineEdit = new QLineEdit(gridLayoutWidget);
        removeUserNameLineEdit->setObjectName(QString::fromUtf8("removeUserNameLineEdit"));
        removeUserNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        removeUserGridLayout->addWidget(removeUserNameLineEdit, 0, 1, 1, 1);

        removeUserPassLabel = new QLabel(gridLayoutWidget);
        removeUserPassLabel->setObjectName(QString::fromUtf8("removeUserPassLabel"));
        removeUserPassLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        removeUserGridLayout->addWidget(removeUserPassLabel, 1, 0, 1, 1);

        removeUserNameLabel = new QLabel(gridLayoutWidget);
        removeUserNameLabel->setObjectName(QString::fromUtf8("removeUserNameLabel"));
        removeUserNameLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        removeUserGridLayout->addWidget(removeUserNameLabel, 0, 0, 1, 1);

        returnAccountsButton2 = new QPushButton(gridLayoutWidget);
        returnAccountsButton2->setObjectName(QString::fromUtf8("returnAccountsButton2"));
        returnAccountsButton2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        removeUserGridLayout->addWidget(returnAccountsButton2, 3, 1, 1, 1);

        deleteUserButton = new QPushButton(gridLayoutWidget);
        deleteUserButton->setObjectName(QString::fromUtf8("deleteUserButton"));
        deleteUserButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        removeUserGridLayout->addWidget(deleteUserButton, 2, 1, 1, 1);

        stackedWidget->addWidget(deleteUserPage);
        removeUserGroupBox->raise();
        RemoveUserLabel_2->raise();
        Inventory_page = new QWidget();
        Inventory_page->setObjectName(QString::fromUtf8("Inventory_page"));
        inventoryPageLabel = new QLabel(Inventory_page);
        inventoryPageLabel->setObjectName(QString::fromUtf8("inventoryPageLabel"));
        inventoryPageLabel->setGeometry(QRect(0, 0, 341, 50));
        inventoryPageLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        returnFromInventoryButton = new QPushButton(Inventory_page);
        returnFromInventoryButton->setObjectName(QString::fromUtf8("returnFromInventoryButton"));
        returnFromInventoryButton->setGeometry(QRect(990, 40, 111, 26));
        returnFromInventoryButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        AddItem = new QPushButton(Inventory_page);
        AddItem->setObjectName(QString::fromUtf8("AddItem"));
        AddItem->setGeometry(QRect(10, 70, 131, 55));
        AddItem->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        AddItem->setIconSize(QSize(20, 20));
        Tableview = new QPushButton(Inventory_page);
        Tableview->setObjectName(QString::fromUtf8("Tableview"));
        Tableview->setGeometry(QRect(460, 70, 131, 55));
        Tableview->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Tableview->setIconSize(QSize(20, 20));
        UpdateInventory = new QPushButton(Inventory_page);
        UpdateInventory->setObjectName(QString::fromUtf8("UpdateInventory"));
        UpdateInventory->setGeometry(QRect(310, 70, 131, 55));
        UpdateInventory->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        UpdateInventory->setIconSize(QSize(20, 20));
        RemoveItem = new QPushButton(Inventory_page);
        RemoveItem->setObjectName(QString::fromUtf8("RemoveItem"));
        RemoveItem->setGeometry(QRect(160, 70, 131, 55));
        RemoveItem->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        RemoveItem->setIconSize(QSize(20, 20));
        stackedWidget_2 = new QStackedWidget(Inventory_page);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 130, 1011, 411));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 127, 145);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 521, 16));
        ItemID = new QLabel(page);
        ItemID->setObjectName(QString::fromUtf8("ItemID"));
        ItemID->setGeometry(QRect(10, 80, 41, 16));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 80, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        Itemname = new QLabel(page);
        Itemname->setObjectName(QString::fromUtf8("Itemname"));
        Itemname->setGeometry(QRect(10, 130, 51, 16));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 130, 113, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        Itemprice = new QLabel(page);
        Itemprice->setObjectName(QString::fromUtf8("Itemprice"));
        Itemprice->setGeometry(QRect(10, 180, 47, 13));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 180, 113, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        Description = new QLabel(page);
        Description->setObjectName(QString::fromUtf8("Description"));
        Description->setGeometry(QRect(10, 230, 61, 16));
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 230, 113, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        Quantity = new QLabel(page);
        Quantity->setObjectName(QString::fromUtf8("Quantity"));
        Quantity->setGeometry(QRect(10, 280, 47, 13));
        lineEdit_5 = new QLineEdit(page);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 280, 113, 20));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        Save = new QPushButton(page);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(410, 250, 75, 51));
        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem14);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 531, 341));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(630, 280, 75, 51));
        stackedWidget_2->addWidget(page_2);
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
        returnFromAuditButton = new QPushButton(audit_page);
        returnFromAuditButton->setObjectName(QString::fromUtf8("returnFromAuditButton"));
        returnFromAuditButton->setGeometry(QRect(990, 40, 111, 26));
        returnFromAuditButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
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
"color: rgb(63, 36, 79);"));

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

        stackedWidget->setCurrentIndex(5);
        stackedWidget_2->setCurrentIndex(0);


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
        changePassGroupBox->setTitle(QString());
        newPassLabel_3->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">New Password:</span></p></body></html>", nullptr));
        usernameLabel_3->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Username: </span></p></body></html>", nullptr));
        pushButton_ChangeEmployeePassword->setText(QCoreApplication::translate("HomepageWindow", "Change Employee Password", nullptr));
        returnAccountsButton->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        changePasswordLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Change User Password</span></p></body></html>", nullptr));
        addUserLabel_2->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Add User</span></p></body></html>", nullptr));
        addUserGroupBox->setTitle(QString());
        saveUserButton->setText(QCoreApplication::translate("HomepageWindow", "Save User", nullptr));
        addUserLabelName->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Name</span></p></body></html>", nullptr));
        addUserLabelPassword->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Password</span></p></body></html>", nullptr));
        addUserLabelUsername->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Username</span></p></body></html>", nullptr));
        returnAccountsButton1->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        RemoveUserLabel_2->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Remove User</span></p></body></html>", nullptr));
        removeUserGroupBox->setTitle(QString());
        removeUserPassLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Password</span></p></body></html>", nullptr));
        removeUserNameLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Username</span></p></body></html>", nullptr));
        returnAccountsButton2->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        deleteUserButton->setText(QCoreApplication::translate("HomepageWindow", "Delete User Account", nullptr));
        inventoryPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">View Inventory Page</span></p></body></html>", nullptr));
        returnFromInventoryButton->setText(QCoreApplication::translate("HomepageWindow", "Return to Home", nullptr));
        AddItem->setText(QCoreApplication::translate("HomepageWindow", "Add Item", nullptr));
        Tableview->setText(QCoreApplication::translate("HomepageWindow", "Table View", nullptr));
        UpdateInventory->setText(QCoreApplication::translate("HomepageWindow", "Update Inventory", nullptr));
        RemoveItem->setText(QCoreApplication::translate("HomepageWindow", "Remove Item", nullptr));
#if QT_CONFIG(tooltip)
        stackedWidget_2->setToolTip(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#000000;\">ATTENTION:</span><span style=\" font-size:10pt; font-weight:600; font-style:italic; color:#ffffff;\">Only enter the Individual Item ID you want to make changes to. </span></p></body></html>", nullptr));
        ItemID->setText(QCoreApplication::translate("HomepageWindow", "Item ID.", nullptr));
        Itemname->setText(QCoreApplication::translate("HomepageWindow", "Item Name", nullptr));
        Itemprice->setText(QCoreApplication::translate("HomepageWindow", "Item Price", nullptr));
        Description->setText(QCoreApplication::translate("HomepageWindow", "Description", nullptr));
        Quantity->setText(QCoreApplication::translate("HomepageWindow", "Quantity", nullptr));
        Save->setText(QCoreApplication::translate("HomepageWindow", "SAVE", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("HomepageWindow", "Item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("HomepageWindow", "Item Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("HomepageWindow", "Item Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("HomepageWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("HomepageWindow", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("HomepageWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("HomepageWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("HomepageWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("HomepageWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("HomepageWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("HomepageWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("HomepageWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("HomepageWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("HomepageWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("HomepageWindow", "11", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HomepageWindow", "SAVE", nullptr));
        auditPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Daily Audit Page</span></p></body></html>", nullptr));
        viewAuditButton->setText(QCoreApplication::translate("HomepageWindow", "View Audit", nullptr));
        returnFromAuditButton->setText(QCoreApplication::translate("HomepageWindow", "Return to Home", nullptr));
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
