/*
 * Copyright (C) 2017 ~ 2018 Wuhan Deepin Technology Co., Ltd.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QScopedPointer>
#include <dabstractdialog.h>
#include <ddialog.h>

class CloseConfirmDialogPrivate;
class CloseConfirmDialog : public Dtk::Widget::DDialog
{
    Q_OBJECT
public:
    enum CloseAction {
        MiniOnClose = 0,
        QuitOnClose = 1,
    };

    explicit CloseConfirmDialog(QWidget *parent = Q_NULLPTR);
    ~CloseConfirmDialog();

    bool isRemember() const;
    int closeAction() const;

public Q_SLOTS:

private:
    QScopedPointer<CloseConfirmDialogPrivate> d_ptr;
    Q_DECLARE_PRIVATE_D(qGetPtrHelper(d_ptr), CloseConfirmDialog)
};

