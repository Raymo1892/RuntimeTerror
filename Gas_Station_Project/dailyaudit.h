#ifndef DAILYAUDIT_H
#define DAILYAUDIT_H

#include <QDialog>

namespace Ui {
class DailyAudit;
}

class DailyAudit : public QDialog
{
    Q_OBJECT

public:
    explicit DailyAudit(QWidget *parent = nullptr);
    ~DailyAudit();

private slots:
    void on_viewAuditButton_clicked();

    void on_returnButton_clicked();

private:
    Ui::DailyAudit *ui;
};

#endif // DAILYAUDIT_H
