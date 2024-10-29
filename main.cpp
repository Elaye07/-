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

void DrawFon();
void DrawSun();
void DrawCloud();
void DrawHouse();
void DrawMan();

//-----------------------------------------------------------------------------------------------------------------------------------------

int main()
    {
    txCreateWindow (800, 600);

    int Cloud = 100
    //int
    //int
    int sizeX   = txGetExtentX(), sizeY   = txGetExtentY();
    int centerX = (sizeX+1)/2,    centerY = (sizeY+1)/2;



     txSelectFont ("Times New Roman", 60);
     txSetTextAlign (TA_CENTER);

     AppearText  (centerX, sizeY*4/5, "\"Hello, world!\\n\" :)",                                TX_BLACK,  TX_LIGHTGREEN, 5000, 100);
     AppearEarth (centerX, centerY, sizeX/2, sizeY/2,                                           TX_BLACK,  TX_LIGHTCYAN,  5000, 100);




    DrawFon();
    DrawSun();
    DrawCloud();
    DrawHouse();
    DrawMan();
    DrawAppearText();

    txPlaySound ("tada.wav");                        // Windows <  7
    txPlaySound ("C:\\Windows\\Media\\tada.wav");



    txTextCursor (false);
    return 0;

    }

//-----------------------------------------------------------------------------------------------------------------------------------------

void DrawFon()
    {

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 800, 600);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 370, 800, 600);

    }

//-----------------------------------------------------------------------------------------------------------------------------------------

void DrawSun()
    {
    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle (107, 75, 48);
    }

//-----------------------------------------------------------------------------------------------------------------------------------------

void DrawCloud()
    {
txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (511, 46, 720, 148);


    }

//-----------------------------------------------------------------------------------------------------------------------------------------

void DrawHouse()
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

//-----------------------------------------------------------------------------------------------------------------------------------------

void DrawMan()
    {
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txLine (595, 445, 555, 359);
    txLine (555, 359, 503, 439);
    txLine (555, 359, 555, 289);
    txLine (555, 289, 515, 344);
    txLine (555, 289, 600, 344);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (555, 265, 25);







    }

//-----------------------------------------------------------------------------------------------------------------------------------------

void AppearText (int x, int y, const char* text, COLORREF from, COLORREF to,
                 int time, int steps)
    {
    int r0 = txExtractColor (from, TX_RED),   r1 = txExtractColor (to, TX_RED),
        g0 = txExtractColor (from, TX_GREEN), g1 = txExtractColor (to, TX_GREEN),
        b0 = txExtractColor (from, TX_BLUE),  b1 = txExtractColor (to, TX_BLUE);

    for (int i = 0; i <= steps && !_kbhit(); i++)
        {
        int r = r0 + (r1 - r0) * i/steps,
            g = g0 + (g1 - g0) * i/steps,
            b = b0 + (b1 - b0) * i/steps;

        txSetColor (RGB (r, g, b));
        txTextOut (x, y, text);

        Sleep (time / steps);
        }

    kbget();

    txSetColor (to);
    txTextOut (x, y, text);
    }

//-----------------------------------------------------------------------------------------------------------------------------------------



//-----------------------------------------------------------------------------------------------------------------------------------------


    //txPlaySound ("Выход из Windows.wav");
    //txPlaySound ("C:\\Windows\\Media\\Выход из Windows.wav");


















