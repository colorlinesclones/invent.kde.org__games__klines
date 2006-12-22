/*******************************************************************
 *
 * Copyright 2006 Dmitry Suzdalev <dimsuz@gmail.com>
 *
 * This file is part of the KDE project "KLines"
 *
 * KLines is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * KLines is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with KAtomic; see the file COPYING.  If not, write to
 * the Free Software Foundation, 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 ********************************************************************/
#ifndef COMMON_DEFINES_H
#define COMMON_DEFINES_H

#include <QList>

enum BallAnimationType { SelectedAnimation, BornAnimation, BurnAnimation };
enum BallColor { Blue=0, Brown, Cyan, Green, Red, Violet, Yellow, NumColors };

struct FieldPos
{
    int x;
    int y;
    FieldPos( int _x=-1, int _y=-1) : x(_x), y(_y) { }
    bool isValid() const { return (x != -1 && y != -1); }
};

typedef QList<FieldPos> FieldPath;

#endif