#ifndef RECOVERPASSWORD_H
#define RECOVERPASSWORD_H

#include <QDialog>

namespace Ui {
class recoverPassword;
}

class recoverPassword : public QDialog
{
    Q_OBJECT

public:
    explicit recoverPassword(QWidget *parent = nullptr);
    ~recoverPassword();

private:
    Ui::recoverPassword *ui;
};

#endif // RECOVERPASSWORD_H
