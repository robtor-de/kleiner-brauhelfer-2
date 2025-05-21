#ifndef DLG_DATENBANK_H
#define DLG_DATENBANK_H

#include "dlgabstract.h"

namespace Ui {
class DlgDatenbank;
}

class DlgDatenbank : public DlgAbstract
{
    Q_OBJECT

public:
    static DlgDatenbank *Dialog;

    explicit DlgDatenbank(QWidget *parent = nullptr);
    virtual ~DlgDatenbank() Q_DECL_OVERRIDE;
    void saveSettings() Q_DECL_OVERRIDE;
    void loadSettings() Q_DECL_OVERRIDE;
    static void restoreView();

private slots:
    void sudLoaded();
    void updateValues();
    void on_comboBox_currentTextChanged(const QString &table);
    void on_comboBoxSud_currentTextChanged(const QString &table);
    void tableView_selectionChanged();

private:
    Ui::DlgDatenbank *ui;
};

#endif // DLG_DATENBANK_H
