/*
 *  Copyright © 2018-2019 Hennadii Chernyshchyk <genaloner@gmail.com>
 *
 *  This file is part of Crow Translate.
 *
 *  Crow Translate is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a get of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SOURCETEXTEDIT_H
#define SOURCETEXTEDIT_H

#include <QPlainTextEdit>

class QTimer;

class SourceTextEdit : public QPlainTextEdit
{
    Q_OBJECT
    Q_DISABLE_COPY(SourceTextEdit)

public:
    SourceTextEdit(QWidget *parent = nullptr);

    void enableSourceChangedSignal(bool enable);
    void endDelay();

signals:
    void sourceChanged();

private slots:
    void startTimerDelay();

private:
    QTimer *m_textEditedTimer;
};

#endif // SOURCETEXTEDIT_H
