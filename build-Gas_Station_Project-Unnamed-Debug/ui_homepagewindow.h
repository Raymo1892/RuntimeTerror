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
    QLabel *cartItemsLabel;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *cartDisplay;
    QLineEdit *totalBoxDisplay;
    QPushButton *clearCartButton;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout;
    QLabel *itemIDLabel;
    QLineEdit *makeSaleItemIDLineEdit;
    QLineEdit *makeSaleQuantityLineEdit;
    QLabel *quantityLabel;
    QPushButton *addToCartButton;
    QLabel *itemMenuLabel;
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
    QLabel *addUserLabelName;
    QLineEdit *addUserLineEditFirstName;
    QLabel *addUserLabelPassword;
    QPushButton *saveUserButton;
    QLabel *addUserLabelUsername;
    QPushButton *returnAccountsButton1;
    QLineEdit *addUserLineEditLastName;
    QLineEdit *addUserLineEditUsername;
    QLabel *lastNameLabel;
    QLineEdit *addUserLineEditPassword;
    QLineEdit *addUserLineEditPrivilege;
    QLabel *privilegeLabel;
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
    QPushButton *addItemButtonInventory;
    QPushButton *tableViewButton;
    QPushButton *updateInventoryButton;
    QPushButton *removeItemButton;
    QLabel *label;
    QGroupBox *inventoryGroupBox;
    QWidget *gridLayoutWidget_6;
    QGridLayout *inventoryGrid;
    QLineEdit *inventoryQuantityLineEdit;
    QLabel *inventoryQuantityLabel;
    QLabel *ItemIDLabel;
    QLineEdit *inventoryIDLineEdit;
    QLineEdit *inventoryNameLineEdit;
    QLabel *categoryInventoryLabel;
    QLabel *inventoryPriceLabel;
    QLineEdit *inventoryPriceLineEdit;
    QLineEdit *inventoryCategoryLineEdit;
    QLabel *inventoryNameLabel;
    QPushButton *clearFieldsButtonInventory;
    QWidget *page_3;
    QTableWidget *tableWidget_2;
    QLabel *inventoryPageLabel_2;
    QPushButton *AddItem_2;
    QPushButton *Tableview_2;
    QPushButton *RemoveItem_2;
    QPushButton *returnFromInventoryButton_2;
    QPushButton *UpdateInventory_2;
    QWidget *audit_page;
    QLabel *auditPageLabel;
    QPushButton *viewAuditButton;
    QPushButton *returnFromAuditButton;
    QGroupBox *viewAuditGroupBox;
    QLabel *viewAuditScreen;
    QWidget *settings_page;
    QLabel *settingsPageLabel;
    QWidget *help_page;
    QLabel *helpPageLabel;
    QLabel *helpScreen;
    QGroupBox *helpPageGroupBox;
    QWidget *gridLayoutWidget_5;
    QGridLayout *helpPageGrid;
    QPushButton *makeSaleHelpButton;
    QPushButton *changePasswordHelpButton;
    QPushButton *addUserHelpButton;
    QPushButton *removeUserHelpButton;
    QPushButton *inventoryHelpButton;
    QPushButton *auditHelpButton;
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
        cartItemsLabel = new QLabel(make_sale_page);
        cartItemsLabel->setObjectName(QString::fromUtf8("cartItemsLabel"));
        cartItemsLabel->setGeometry(QRect(670, 160, 271, 31));
        cartItemsLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"font: 87 8pt \"Segoe UI Black\";"));
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

        groupBox = new QGroupBox(make_sale_page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 180, 231, 261));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        gridLayoutWidget_4 = new QWidget(groupBox);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(20, 20, 191, 221));
        gridLayout = new QGridLayout(gridLayoutWidget_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        itemIDLabel = new QLabel(gridLayoutWidget_4);
        itemIDLabel->setObjectName(QString::fromUtf8("itemIDLabel"));
        itemIDLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        gridLayout->addWidget(itemIDLabel, 0, 0, 1, 1);

        makeSaleItemIDLineEdit = new QLineEdit(gridLayoutWidget_4);
        makeSaleItemIDLineEdit->setObjectName(QString::fromUtf8("makeSaleItemIDLineEdit"));
        makeSaleItemIDLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(makeSaleItemIDLineEdit, 0, 1, 1, 1);

        makeSaleQuantityLineEdit = new QLineEdit(gridLayoutWidget_4);
        makeSaleQuantityLineEdit->setObjectName(QString::fromUtf8("makeSaleQuantityLineEdit"));
        makeSaleQuantityLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(makeSaleQuantityLineEdit, 1, 1, 1, 1);

        quantityLabel = new QLabel(gridLayoutWidget_4);
        quantityLabel->setObjectName(QString::fromUtf8("quantityLabel"));
        quantityLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        gridLayout->addWidget(quantityLabel, 1, 0, 1, 1);

        addToCartButton = new QPushButton(gridLayoutWidget_4);
        addToCartButton->setObjectName(QString::fromUtf8("addToCartButton"));
        addToCartButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        gridLayout->addWidget(addToCartButton, 2, 0, 1, 2);

        itemMenuLabel = new QLabel(make_sale_page);
        itemMenuLabel->setObjectName(QString::fromUtf8("itemMenuLabel"));
        itemMenuLabel->setGeometry(QRect(350, 180, 181, 261));
        itemMenuLabel->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);\n"
"font: 87 8pt \"Segoe UI Black\";"));
        itemMenuLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(make_sale_page);
        account_Homepage = new QWidget();
        account_Homepage->setObjectName(QString::fromUtf8("account_Homepage"));
        account_Homepage->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 127, 145)"));
        ChangePasswordButton = new QPushButton(account_Homepage);
        ChangePasswordButton->setObjectName(QString::fromUtf8("ChangePasswordButton"));
        ChangePasswordButton->setEnabled(true);
        ChangePasswordButton->setGeometry(QRect(420, 70, 311, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Black"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(10);
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
        gridLayoutWidget_2->setGeometry(QRect(39, 29, 361, 216));
        addUserGridLayout = new QGridLayout(gridLayoutWidget_2);
        addUserGridLayout->setObjectName(QString::fromUtf8("addUserGridLayout"));
        addUserGridLayout->setContentsMargins(0, 0, 0, 0);
        addUserLabelName = new QLabel(gridLayoutWidget_2);
        addUserLabelName->setObjectName(QString::fromUtf8("addUserLabelName"));
        addUserLabelName->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(addUserLabelName, 0, 0, 1, 1);

        addUserLineEditFirstName = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditFirstName->setObjectName(QString::fromUtf8("addUserLineEditFirstName"));
        addUserLineEditFirstName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditFirstName, 0, 1, 1, 1);

        addUserLabelPassword = new QLabel(gridLayoutWidget_2);
        addUserLabelPassword->setObjectName(QString::fromUtf8("addUserLabelPassword"));
        addUserLabelPassword->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(addUserLabelPassword, 3, 0, 1, 1);

        saveUserButton = new QPushButton(gridLayoutWidget_2);
        saveUserButton->setObjectName(QString::fromUtf8("saveUserButton"));
        saveUserButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        addUserGridLayout->addWidget(saveUserButton, 5, 1, 1, 1);

        addUserLabelUsername = new QLabel(gridLayoutWidget_2);
        addUserLabelUsername->setObjectName(QString::fromUtf8("addUserLabelUsername"));
        addUserLabelUsername->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(addUserLabelUsername, 2, 0, 1, 1);

        returnAccountsButton1 = new QPushButton(gridLayoutWidget_2);
        returnAccountsButton1->setObjectName(QString::fromUtf8("returnAccountsButton1"));
        returnAccountsButton1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        addUserGridLayout->addWidget(returnAccountsButton1, 6, 1, 1, 1);

        addUserLineEditLastName = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditLastName->setObjectName(QString::fromUtf8("addUserLineEditLastName"));
        addUserLineEditLastName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditLastName, 1, 1, 1, 1);

        addUserLineEditUsername = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditUsername->setObjectName(QString::fromUtf8("addUserLineEditUsername"));
        addUserLineEditUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditUsername, 2, 1, 1, 1);

        lastNameLabel = new QLabel(gridLayoutWidget_2);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(lastNameLabel, 1, 0, 1, 1);

        addUserLineEditPassword = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditPassword->setObjectName(QString::fromUtf8("addUserLineEditPassword"));
        addUserLineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditPassword, 3, 1, 1, 1);

        addUserLineEditPrivilege = new QLineEdit(gridLayoutWidget_2);
        addUserLineEditPrivilege->setObjectName(QString::fromUtf8("addUserLineEditPrivilege"));
        addUserLineEditPrivilege->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        addUserGridLayout->addWidget(addUserLineEditPrivilege, 4, 1, 1, 1);

        privilegeLabel = new QLabel(gridLayoutWidget_2);
        privilegeLabel->setObjectName(QString::fromUtf8("privilegeLabel"));
        privilegeLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        addUserGridLayout->addWidget(privilegeLabel, 4, 0, 1, 1);

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
        inventoryPageLabel->setGeometry(QRect(10, 0, 181, 50));
        inventoryPageLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        returnFromInventoryButton = new QPushButton(Inventory_page);
        returnFromInventoryButton->setObjectName(QString::fromUtf8("returnFromInventoryButton"));
        returnFromInventoryButton->setGeometry(QRect(980, 20, 111, 26));
        returnFromInventoryButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        addItemButtonInventory = new QPushButton(Inventory_page);
        addItemButtonInventory->setObjectName(QString::fromUtf8("addItemButtonInventory"));
        addItemButtonInventory->setGeometry(QRect(10, 70, 131, 55));
        addItemButtonInventory->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        addItemButtonInventory->setIconSize(QSize(20, 20));
        tableViewButton = new QPushButton(Inventory_page);
        tableViewButton->setObjectName(QString::fromUtf8("tableViewButton"));
        tableViewButton->setGeometry(QRect(460, 70, 131, 55));
        tableViewButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        tableViewButton->setIconSize(QSize(20, 20));
        updateInventoryButton = new QPushButton(Inventory_page);
        updateInventoryButton->setObjectName(QString::fromUtf8("updateInventoryButton"));
        updateInventoryButton->setGeometry(QRect(310, 70, 131, 55));
        updateInventoryButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        updateInventoryButton->setIconSize(QSize(20, 20));
        removeItemButton = new QPushButton(Inventory_page);
        removeItemButton->setObjectName(QString::fromUtf8("removeItemButton"));
        removeItemButton->setGeometry(QRect(160, 70, 131, 55));
        removeItemButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        removeItemButton->setIconSize(QSize(20, 20));
        label = new QLabel(Inventory_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 150, 711, 31));
        inventoryGroupBox = new QGroupBox(Inventory_page);
        inventoryGroupBox->setObjectName(QString::fromUtf8("inventoryGroupBox"));
        inventoryGroupBox->setGeometry(QRect(50, 210, 431, 301));
        inventoryGroupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        gridLayoutWidget_6 = new QWidget(inventoryGroupBox);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(29, 29, 371, 241));
        inventoryGrid = new QGridLayout(gridLayoutWidget_6);
        inventoryGrid->setObjectName(QString::fromUtf8("inventoryGrid"));
        inventoryGrid->setContentsMargins(0, 0, 0, 0);
        inventoryQuantityLineEdit = new QLineEdit(gridLayoutWidget_6);
        inventoryQuantityLineEdit->setObjectName(QString::fromUtf8("inventoryQuantityLineEdit"));
        inventoryQuantityLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        inventoryGrid->addWidget(inventoryQuantityLineEdit, 4, 1, 1, 1);

        inventoryQuantityLabel = new QLabel(gridLayoutWidget_6);
        inventoryQuantityLabel->setObjectName(QString::fromUtf8("inventoryQuantityLabel"));
        inventoryQuantityLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        inventoryGrid->addWidget(inventoryQuantityLabel, 4, 0, 1, 1);

        ItemIDLabel = new QLabel(gridLayoutWidget_6);
        ItemIDLabel->setObjectName(QString::fromUtf8("ItemIDLabel"));
        ItemIDLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        inventoryGrid->addWidget(ItemIDLabel, 0, 0, 1, 1);

        inventoryIDLineEdit = new QLineEdit(gridLayoutWidget_6);
        inventoryIDLineEdit->setObjectName(QString::fromUtf8("inventoryIDLineEdit"));
        inventoryIDLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        inventoryGrid->addWidget(inventoryIDLineEdit, 0, 1, 1, 1);

        inventoryNameLineEdit = new QLineEdit(gridLayoutWidget_6);
        inventoryNameLineEdit->setObjectName(QString::fromUtf8("inventoryNameLineEdit"));
        inventoryNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        inventoryGrid->addWidget(inventoryNameLineEdit, 1, 1, 1, 1);

        categoryInventoryLabel = new QLabel(gridLayoutWidget_6);
        categoryInventoryLabel->setObjectName(QString::fromUtf8("categoryInventoryLabel"));
        categoryInventoryLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        inventoryGrid->addWidget(categoryInventoryLabel, 3, 0, 1, 1);

        inventoryPriceLabel = new QLabel(gridLayoutWidget_6);
        inventoryPriceLabel->setObjectName(QString::fromUtf8("inventoryPriceLabel"));
        inventoryPriceLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        inventoryGrid->addWidget(inventoryPriceLabel, 2, 0, 1, 1);

        inventoryPriceLineEdit = new QLineEdit(gridLayoutWidget_6);
        inventoryPriceLineEdit->setObjectName(QString::fromUtf8("inventoryPriceLineEdit"));
        inventoryPriceLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        inventoryGrid->addWidget(inventoryPriceLineEdit, 2, 1, 1, 1);

        inventoryCategoryLineEdit = new QLineEdit(gridLayoutWidget_6);
        inventoryCategoryLineEdit->setObjectName(QString::fromUtf8("inventoryCategoryLineEdit"));
        inventoryCategoryLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        inventoryGrid->addWidget(inventoryCategoryLineEdit, 3, 1, 1, 1);

        inventoryNameLabel = new QLabel(gridLayoutWidget_6);
        inventoryNameLabel->setObjectName(QString::fromUtf8("inventoryNameLabel"));
        inventoryNameLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));

        inventoryGrid->addWidget(inventoryNameLabel, 1, 0, 1, 1);

        clearFieldsButtonInventory = new QPushButton(gridLayoutWidget_6);
        clearFieldsButtonInventory->setObjectName(QString::fromUtf8("clearFieldsButtonInventory"));
        clearFieldsButtonInventory->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79);"));

        inventoryGrid->addWidget(clearFieldsButtonInventory, 5, 0, 1, 2);

        stackedWidget->addWidget(Inventory_page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        tableWidget_2 = new QTableWidget(page_3);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_2->rowCount() < 10)
            tableWidget_2->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(9, __qtablewidgetitem14);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(50, 170, 531, 331));
        tableWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        inventoryPageLabel_2 = new QLabel(page_3);
        inventoryPageLabel_2->setObjectName(QString::fromUtf8("inventoryPageLabel_2"));
        inventoryPageLabel_2->setGeometry(QRect(10, 0, 181, 50));
        inventoryPageLabel_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";"));
        AddItem_2 = new QPushButton(page_3);
        AddItem_2->setObjectName(QString::fromUtf8("AddItem_2"));
        AddItem_2->setGeometry(QRect(10, 70, 131, 55));
        AddItem_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        AddItem_2->setIconSize(QSize(20, 20));
        Tableview_2 = new QPushButton(page_3);
        Tableview_2->setObjectName(QString::fromUtf8("Tableview_2"));
        Tableview_2->setGeometry(QRect(460, 70, 131, 55));
        Tableview_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        Tableview_2->setIconSize(QSize(20, 20));
        RemoveItem_2 = new QPushButton(page_3);
        RemoveItem_2->setObjectName(QString::fromUtf8("RemoveItem_2"));
        RemoveItem_2->setGeometry(QRect(160, 70, 131, 55));
        RemoveItem_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        RemoveItem_2->setIconSize(QSize(20, 20));
        returnFromInventoryButton_2 = new QPushButton(page_3);
        returnFromInventoryButton_2->setObjectName(QString::fromUtf8("returnFromInventoryButton_2"));
        returnFromInventoryButton_2->setGeometry(QRect(980, 20, 111, 26));
        returnFromInventoryButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        UpdateInventory_2 = new QPushButton(page_3);
        UpdateInventory_2->setObjectName(QString::fromUtf8("UpdateInventory_2"));
        UpdateInventory_2->setGeometry(QRect(310, 70, 131, 55));
        UpdateInventory_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        UpdateInventory_2->setIconSize(QSize(20, 20));
        stackedWidget->addWidget(page_3);
        audit_page = new QWidget();
        audit_page->setObjectName(QString::fromUtf8("audit_page"));
        auditPageLabel = new QLabel(audit_page);
        auditPageLabel->setObjectName(QString::fromUtf8("auditPageLabel"));
        auditPageLabel->setGeometry(QRect(0, 0, 101, 50));
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
        viewAuditGroupBox = new QGroupBox(audit_page);
        viewAuditGroupBox->setObjectName(QString::fromUtf8("viewAuditGroupBox"));
        viewAuditGroupBox->setGeometry(QRect(220, 130, 591, 331));
        viewAuditGroupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        viewAuditScreen = new QLabel(viewAuditGroupBox);
        viewAuditScreen->setObjectName(QString::fromUtf8("viewAuditScreen"));
        viewAuditScreen->setGeometry(QRect(40, 40, 511, 251));
        viewAuditScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));
        viewAuditScreen->setAlignment(Qt::AlignCenter);
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
        helpPageLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        helpScreen = new QLabel(help_page);
        helpScreen->setObjectName(QString::fromUtf8("helpScreen"));
        helpScreen->setGeometry(QRect(560, 170, 391, 261));
        helpScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));
        helpScreen->setAlignment(Qt::AlignCenter);
        helpPageGroupBox = new QGroupBox(help_page);
        helpPageGroupBox->setObjectName(QString::fromUtf8("helpPageGroupBox"));
        helpPageGroupBox->setGeometry(QRect(70, 170, 451, 261));
        helpPageGroupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(63, 36, 79);"));
        gridLayoutWidget_5 = new QWidget(helpPageGroupBox);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(40, 40, 371, 191));
        helpPageGrid = new QGridLayout(gridLayoutWidget_5);
        helpPageGrid->setObjectName(QString::fromUtf8("helpPageGrid"));
        helpPageGrid->setContentsMargins(0, 0, 0, 0);
        makeSaleHelpButton = new QPushButton(gridLayoutWidget_5);
        makeSaleHelpButton->setObjectName(QString::fromUtf8("makeSaleHelpButton"));
        makeSaleHelpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        helpPageGrid->addWidget(makeSaleHelpButton, 0, 0, 1, 1);

        changePasswordHelpButton = new QPushButton(gridLayoutWidget_5);
        changePasswordHelpButton->setObjectName(QString::fromUtf8("changePasswordHelpButton"));
        changePasswordHelpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        helpPageGrid->addWidget(changePasswordHelpButton, 1, 0, 1, 1);

        addUserHelpButton = new QPushButton(gridLayoutWidget_5);
        addUserHelpButton->setObjectName(QString::fromUtf8("addUserHelpButton"));
        addUserHelpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        helpPageGrid->addWidget(addUserHelpButton, 2, 0, 1, 1);

        removeUserHelpButton = new QPushButton(gridLayoutWidget_5);
        removeUserHelpButton->setObjectName(QString::fromUtf8("removeUserHelpButton"));
        removeUserHelpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        helpPageGrid->addWidget(removeUserHelpButton, 0, 1, 1, 1);

        inventoryHelpButton = new QPushButton(gridLayoutWidget_5);
        inventoryHelpButton->setObjectName(QString::fromUtf8("inventoryHelpButton"));
        inventoryHelpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        helpPageGrid->addWidget(inventoryHelpButton, 1, 1, 1, 1);

        auditHelpButton = new QPushButton(gridLayoutWidget_5);
        auditHelpButton->setObjectName(QString::fromUtf8("auditHelpButton"));
        auditHelpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));

        helpPageGrid->addWidget(auditHelpButton, 2, 1, 1, 1);

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

        stackedWidget->setCurrentIndex(6);


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
        cartItemsLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#00ffff;\">Cart Items</span></p></body></html>", nullptr));
        cartDisplay->setText(QString());
        totalBoxDisplay->setText(QCoreApplication::translate("HomepageWindow", "$0.00", nullptr));
        clearCartButton->setText(QCoreApplication::translate("HomepageWindow", "Clear Cart", nullptr));
        groupBox->setTitle(QString());
        itemIDLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Item ID</span></p></body></html>", nullptr));
        quantityLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Quantity</span></p></body></html>", nullptr));
        addToCartButton->setText(QCoreApplication::translate("HomepageWindow", "Add To Cart", nullptr));
        itemMenuLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Item Menu:</span></p><p><span style=\" color:#00ffff;\">1. Coffee ($.99)</span></p><p><span style=\" color:#00ffff;\">2. Bottle Beverage ($1.79)</span></p><p><span style=\" color:#00ffff;\">3. Fountain Drink ($.99)</span></p><p><span style=\" color:#00ffff;\">4. Chips ($1.99)</span></p><p><span style=\" color:#00ffff;\">5. Candy ($.99)</span></p><p><span style=\" color:#00ffff;\">6. Grill Item ($1.99)</span></p><p><span style=\" color:#00ffff;\">7. Unleaded ($2.79/gal)</span></p><p><span style=\" color:#00ffff;\">8. Premium ($3.09/gal)</span></p><p><span style=\" color:#00ffff;\">9. Diesel ($3.29/gal)</span></p></body></html>", nullptr));
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
        addUserLabelName->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">First Name</span></p></body></html>", nullptr));
        addUserLabelPassword->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Password</span></p></body></html>", nullptr));
        saveUserButton->setText(QCoreApplication::translate("HomepageWindow", "Save User", nullptr));
        addUserLabelUsername->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Username</span></p></body></html>", nullptr));
        returnAccountsButton1->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Last Name</span></p></body></html>", nullptr));
        privilegeLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Privilege</span></p></body></html>", nullptr));
        RemoveUserLabel_2->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Remove User</span></p></body></html>", nullptr));
        removeUserGroupBox->setTitle(QString());
        removeUserPassLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Password</span></p></body></html>", nullptr));
        removeUserNameLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Username</span></p></body></html>", nullptr));
        returnAccountsButton2->setText(QCoreApplication::translate("HomepageWindow", "Return to Accounts Home", nullptr));
        deleteUserButton->setText(QCoreApplication::translate("HomepageWindow", "Delete User Account", nullptr));
        inventoryPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Inventory</span></p></body></html>", nullptr));
        returnFromInventoryButton->setText(QCoreApplication::translate("HomepageWindow", "Return to Home", nullptr));
        addItemButtonInventory->setText(QCoreApplication::translate("HomepageWindow", "Add Item", nullptr));
        tableViewButton->setText(QCoreApplication::translate("HomepageWindow", "Table View", nullptr));
        updateInventoryButton->setText(QCoreApplication::translate("HomepageWindow", "Update Inventory", nullptr));
        removeItemButton->setText(QCoreApplication::translate("HomepageWindow", "Remove Item", nullptr));
        label->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#000000;\">ATTENTION:</span><span style=\" font-size:10pt; font-weight:600; font-style:italic; color:#ffffff;\">Only enter the Individual Item ID you want to make changes to. </span></p></body></html>", nullptr));
        inventoryGroupBox->setTitle(QString());
        inventoryQuantityLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Quantity</span></p></body></html>", nullptr));
        ItemIDLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Item ID</span></p></body></html>", nullptr));
        categoryInventoryLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Category</span></p></body></html>", nullptr));
        inventoryPriceLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Price</span></p></body></html>", nullptr));
        inventoryNameLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" color:#00ffff;\">Name</span></p></body></html>", nullptr));
        clearFieldsButtonInventory->setText(QCoreApplication::translate("HomepageWindow", "Clear Fields", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("HomepageWindow", "Item No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("HomepageWindow", "Item Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("HomepageWindow", "Item Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("HomepageWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("HomepageWindow", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("HomepageWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("HomepageWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("HomepageWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("HomepageWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("HomepageWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("HomepageWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("HomepageWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("HomepageWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("HomepageWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("HomepageWindow", "11", nullptr));
        inventoryPageLabel_2->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Inventory</span></p></body></html>", nullptr));
        AddItem_2->setText(QCoreApplication::translate("HomepageWindow", "Add Item", nullptr));
        Tableview_2->setText(QCoreApplication::translate("HomepageWindow", "Inventory View", nullptr));
        RemoveItem_2->setText(QCoreApplication::translate("HomepageWindow", "Remove Item", nullptr));
        returnFromInventoryButton_2->setText(QCoreApplication::translate("HomepageWindow", "Return to Home", nullptr));
        UpdateInventory_2->setText(QCoreApplication::translate("HomepageWindow", "Update Inventory", nullptr));
        auditPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Audit</span></p></body></html>", nullptr));
        viewAuditButton->setText(QCoreApplication::translate("HomepageWindow", "View Audit", nullptr));
        returnFromAuditButton->setText(QCoreApplication::translate("HomepageWindow", "Return to Home", nullptr));
        viewAuditGroupBox->setTitle(QString());
        viewAuditScreen->setText(QString());
        settingsPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Settings</span></p></body></html>", nullptr));
        helpPageLabel->setText(QCoreApplication::translate("HomepageWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ffff;\">Help</span></p></body></html>", nullptr));
        helpScreen->setText(QString());
        helpPageGroupBox->setTitle(QString());
        makeSaleHelpButton->setText(QCoreApplication::translate("HomepageWindow", "Make Sale", nullptr));
        changePasswordHelpButton->setText(QCoreApplication::translate("HomepageWindow", "Change Employee Password", nullptr));
        addUserHelpButton->setText(QCoreApplication::translate("HomepageWindow", "Add User", nullptr));
        removeUserHelpButton->setText(QCoreApplication::translate("HomepageWindow", "Remove User", nullptr));
        inventoryHelpButton->setText(QCoreApplication::translate("HomepageWindow", "Inventory", nullptr));
        auditHelpButton->setText(QCoreApplication::translate("HomepageWindow", "Audit", nullptr));
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
