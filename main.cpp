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
//! @todo     - (TODO: ������ ��������� ������ �� ����� �����)
//!
//! @bug      - (TODO: ������ ��������� ������ � ���� �����)
//!
//! @par        ������� ��������� �����
//!           - ������ 0.01 Alpha
//!             - ������ ��� ��������� ����
//!
//}=======================================================================

#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (600, 0, 800, 0);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_RED);
    txRectangle (505, 445, 145, 215);
    POINT star[5] = {{323, 131}, {500, 215}, {145, 215}};
          txPolygon (star, 3);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle (171, 137, 45, 15, 105, 75)








    txTextCursor (false);
    return 0;
    }

