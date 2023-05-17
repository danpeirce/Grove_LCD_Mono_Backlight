/*
  SerialDisplay.ino
  2013 Copyright (c) Seeed Technology Inc.  All right reserved.

  Author:Loovee
  2013-9-18

  Grove - Serial LCD Mono Backlight demo.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <Wire.h>
#include "mono_lcd.h"

mono_lcd lcd;

const int numRows = 2;
const int numCols = 16;

void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(numCols,numRows, 4, 5);  // and gpio pins 4 and 5
}

void loop() {
    // loop from ASCII 'a' to ASCII 'z':
    for (int thisLetter = 'a'; thisLetter <= 'z'; thisLetter++) {
        // loop over the columns:
        for (int thisRow = 0; thisRow < numRows; thisRow++) {
            // loop over the rows:
            for (int thisCol = 0; thisCol < numCols; thisCol++) {
                // set the cursor position:
                lcd.setCursor(thisCol,thisRow);
                // print the letter:
                lcd.write(thisLetter);
                delay(200);
            }
        }
    }
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/