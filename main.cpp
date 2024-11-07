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
void DrawText(yText+50, "Пустота");
void DrawFonText();

//-----------------------------------------------------------------------------------------------------------------------------------------

int kbget();



int main()
    {
    txCreateWindow (800, 600);

    int xSun = 100;
    int sizeX   = txGetExtentX(), sizeY   = txGetExtentY();
    int centerX = (sizeX+1)/2,    centerY = (sizeY+1)/2;
    int yText = 650;

    while(yText > - 20)
    {
      txBegin();
      DrawText(yText+50, "Пустота");
      DrawFonText();
      txEnd();
      yText -= 5;
      txSleep(10);
    }




    //int
    //int









    DrawFon();
    DrawSun();
    DrawCloud();
    DrawHouse();
    DrawMan();
    DrawText(yText+50, "Пустота");


    txPlaySound ("tada.wav");                        // Windows <  7
    txPlaySound ("C:\\Windows\\Media\\tada.wav");



    txTextCursor (false);
    return 0;

    }

//-----------------------------------------------------------------------------------------------------------------------------------------

void DrawText(yText+50, "Пустота")
    {

    txSetColor (TX_BLACK);
    txSelectFont ("Comic Sans MS", 40);
    txDrawText (0, 0, 800, 600, "И здесь могла бы быть Ваша реклама.");






//    }
//void MoveSun(int fromX, int fromY, int toX, int toY,
            //  int sizeX, int sizeY, COLORREF color, COLORREF bkColor,
            //  int time, int steps)
  //  {       //
    //txBegin();

    //int Sun = 0;
   // while (Sun <= steps)
       // int x = fromX + (toX - fromX) * Sun/steps,
          //  y = fromY + (toY - fromY) * Sun/steps;

        //DrawSun (x, y - i%6, sizeX, sizeY, color,   i%3*0.02, i%3*-0.1, i%3*0.1, 0);

        //txSleep (time / steps);

       // DrawSun (x, y - i%6, sizeX, sizeY, bkColor, i%3*0.02, i%3*-0.1, i%3*0.1, 0);
       // i++;

       // DrawSun (toX, toY, sizeX, sizeY, color, 0, 0, 0);

   // txEnd();
    }

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

void DrawSun(int x, int y, int sizeX, int sizeY)
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



//----------------------------------------------------------------------------



void DrawFonText()
    {

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle (210, 445, 600, 600);


    }
//----------------------------------------------------------------------------


//----------------------------------------------------------------------------

int kbget()
    {
    int ch = 0;
    while (_kbhit()) ch = _getch();
    return ch;
    }


//-----------------------------------------------------------------------------------------------------------------------------------------



//-----------------------------------------------------------------------------------------------------------------------------------------


    //txPlaySound ("Выход из Windows.wav");
    //txPlaySound ("C:\\Windows\\Media\\Выход из Windows.wav");


















