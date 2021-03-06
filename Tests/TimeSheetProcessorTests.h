/*
  TimeSheetProcessorTests.h

  This file is part of Charm, a task-based time tracking application.

  Copyright (C) 2015-2017 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com

  Author: Franck Arrecot <franck.arrecot@kdab.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TIMESHEETPROCESSORTESTS_H
#define TIMESHEETPROCESSORTESTS_H

#include <QObject>

class TimeSheetProcessorTests : public QObject
{
    Q_OBJECT

public:
    explicit TimeSheetProcessorTests();

private slots:
    void testAddRemoveTimeSheet();

private:
    int m_idTimeSheet;
    int m_adminId;
    QString m_reportPath;
};

#endif
