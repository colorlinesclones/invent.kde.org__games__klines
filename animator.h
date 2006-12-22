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
#ifndef ANIMATOR_H
#define ANIMATOR_H

#include <QTimeLine>
#include "commondefs.h"

class KLinesScene;
class BallItem;

class KLinesAnimator : public QObject
{
    Q_OBJECT
public:
    KLinesAnimator( KLinesScene *scene );
    void startMoveAnimation( const FieldPath& path );
signals:
    void moveFinished();
private slots:
    void animFrameChanged(int);
private:
    QTimeLine m_timeLine;
    KLinesScene* m_scene;
    FieldPath m_path;
    BallItem* m_movingBall;
};

#endif