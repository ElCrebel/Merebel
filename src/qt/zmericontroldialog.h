// Copyright (c) 2017-2018 The MEREBEL developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZMERICONTROLDIALOG_H
#define ZMERICONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zmeri/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZMeriControlDialog;
}

class CZMeriControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZMeriControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZMeriControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZMeriControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZMeriControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZMeriControlDialog(QWidget *parent);
    ~ZMeriControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZMeriControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZMeriControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZMERICONTROLDIALOG_H
