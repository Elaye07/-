//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <���������>\n
//! @brief      <������������>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <�����>, <���> (<���> <�����>)
//! @date       <����>
//!
//! @par        ��������������
//!           - (TODO: ������ ��������)
//!
//! @todo     - (TODO:�������)
//!
//! @bug      - (�����)
//!
//! @par        ������� ��������� �����
//!           - ������ 0.01 Alpha
//!             - ������ ��� ��������� ����
//!
//}=======================================================================                                                                                                                                                                                                                                                                        .

#include "TXLib.h"


//void DrawFon();
//void DrawSun();
//void DrawCloud();
//void DrawHouse();
//void DrawMan();
//void DrawText();
//void DrawFonText();
//void MoveSUN();

void DrawTEXT(int y)
    {


    txSetColor (TX_BLACK);
    txSelectFont ("Comic Sans MS", 40);
    txDrawText (0, y, 800, y+100, "������� ��� �������");
    txDrawText (0, y, 800, y+150, "�����");
    txDrawText (0, y, 800, y+200, "��- ���, ��");
    txDrawText (0, y, 800, y+250, "�������");




    }



//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                    .

void DrawText(int y)
    {


    txSetColor (TX_BLACK);
    txSelectFont ("Comic Sans MS", 40);
    txDrawText (0, y, 800, y+100, "������� ��� �������");
    txDrawText (0, y, 800, y+150, "����������");
    txDrawText (0, y, 800, y+200, "����");
    txDrawText (0, y, 800, y+250, "����������");




    }
//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                    .

void DrawFon()
    {

    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 800, 600);

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 370, 800, 600);

    }
//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                    .

void DrawSun(int x)
    {
    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle (x, 75, 48);
    }
//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                     .

void DrawCloud(int x)
    {
txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse (x+562, 46, x+766, 148);
//766




}
//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                      .

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
//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                       .

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
//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                        .

void DrawFonText()
    {

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 800, 600);


    }
//----------------------------------------------------------------------------                                                                                                                                                                                                                                                                       .

int main()
    {
    txCreateWindow (800, 600);

    int xSun = 100;
    int yText = 500;
    int xCloud = 300;
    int BAZAR = 500;
    int yTEXT = 500;

    while(yText > - 200)
    {
      txBegin();
      DrawFonText();
      DrawText(yText + 50);
      txEnd();
      yText -= 5;
      txSleep(10);
    }







    while(xSun<1000)
    {
      txBegin();
      DrawFon();
      DrawSun(xSun);
      DrawCloud(xCloud);
      DrawHouse();
      DrawMan();
      txEnd();
      if(BAZAR<1000)
    {
const char* name = txInputBox ("�������� ������� ������, �� ��� ��?", "System", "��, ���!");
txMessageBox ("��������� � ����� ��������!");
BAZAR += 1000;

    }
      xSun += 3;
      xCloud -= 2;
      txSleep(5);

    }




    while(BAZAR>1000)
    {
    DrawFonText();
    DrawTEXT(yTEXT);
    txEnd();
    yTEXT -= 5;
    txSleep(10);



    }

    txPlaySound ("tada.wav");
    txPlaySound ("C:\\Windows\\Media\\tada.wav");



    txTextCursor (false);
    return 0;

    }
//-----------------------------------------------------------------------------------------------------------------------------------------                                                                                                                                                                                                  .   LOL
















