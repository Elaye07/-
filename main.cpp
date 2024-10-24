//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <Заголовок>\n
//! @brief      <Подзаголовок>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <Автор>, <Год> (<Имя> <Почта>)
//! @date       <Дата>
//!
//! @par        Протестировано
//!           - (TODO: список платформ)
//!
//! @todo     - (TODO: список ближайших планов по этому файлу)
//!
//! @bug      - (TODO: список найденных ошибок в этом файле)
//!
//! @par        История изменений файла
//!           - Версия 0.01 Alpha
//!             - Только что созданный файл
//!
//}=======================================================================

#include "TXLib.h"

void drawFon()
{

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 800, 600);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 370, 800, 600);

 }

void drawSun()
{
 txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle (107, 75, 48);
}

void drawCloud()
{
txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (511, 46, 720, 148);


}

void drawHouse()
{
    txSetColor (TX_BROWN);
    txSetFillColor (TX_BROWN);
    txRectangle (200, 100, 245, 213);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_RED);
    txRectangle (505, 445, 145, 215);
    POINT star[5] = {{323, 131}, {500, 215}, {145, 215}};
          txPolygon (star, 3);

    txSetColor (TX_CYAN);
    txSetFillColor (TX_CYAN);
    txRectangle (202, 276, 335, 400);


}

int main()
{
    txCreateWindow (800, 600);

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 800, 600);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 370, 800, 600);


    txSetColor (TX_BROWN);
    txSetFillColor (TX_BROWN);
    txRectangle (200, 100, 245, 213);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_RED);
    txRectangle (505, 445, 145, 215);
    POINT star[5] = {{323, 131}, {500, 215}, {145, 215}};
          txPolygon (star, 3);


    txSetColor (TX_CYAN);
    txSetFillColor (TX_CYAN);
    txRectangle (202, 276, 335, 400);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle (107, 75, 48);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (511, 46, 720, 148);





    txTextCursor (false);
    return 0;
    }

