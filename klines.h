/***************************************************************************
    begin                : Fri May 19 2000
    copyright            : (C) 2000 by Roman Razilov
    email                : Roman.Razilov@gmx.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KLINES_H
#define KLINES_H

#include <KMainWindow>

class KAction;
class KToggleAction;
class MainWidget;

class KLinesMainWindow : public KMainWindow
{
  Q_OBJECT
public:
  KLinesMainWindow();
  ~KLinesMainWindow();

protected:
  void initKAction();

public slots:
  void startGame();
private slots:
  void updateScore(int score);
  void gameOver(int score);
  void showNextToggled(bool show);

private:
  MainWidget *mwidget;
};

#endif
