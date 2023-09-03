#ifndef MSGBOXDLG_H
#define MSGBOXDLG_H

#include <QDialog>
#include <QLabel>
#include <QMessageBox>
class MsgBoxDlg : public QDialog
{
public:
    MsgBoxDlg();

private slots:
    void showCriticalMsg();

private:
    QLabel *label;
};

#endif // MSGBOXDLG_H
