/*
Copyright (c) 2019 LeRoy Miller

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  

https://github.com/kd8bxp
https://www.youtube.com/channel/UCP6Vh4hfyJF288MTaRAF36w  
https://kd8bxp.blogspot.com/  
*/

#include "Rollbot.h"
RollbotLED  LED;
/* This library works a lot like a BCD clock
 *  LED near OLED is 1
 *  Up is 2
 *  UP is 4
 *  Up is 8
 *  Up is 16
 *  Up is 32
 *  Up is 64
 *  Up is 128
 *  
 *  Any number from 0 to 255 can be displaied
 */

int wait = 50;

void setup() {
  //LED.DataOut(128);
  //while(1);

}

void loop() {

//cyclon
LED.DataOut(0);
delay(wait);
LED.DataOut(1);
delay(wait);
LED.DataOut(2);
delay(wait);
LED.DataOut(4);
delay(wait);
LED.DataOut(8);
delay(wait);
LED.DataOut(16);
delay(wait);
LED.DataOut(32);
delay(wait);
LED.DataOut(64);
delay(wait);
LED.DataOut(128);
delay(wait);
LED.DataOut(64);
delay(wait);
LED.DataOut(32);
delay(wait);
LED.DataOut(16);
delay(wait);
LED.DataOut(8);
delay(wait);
LED.DataOut(4);
delay(wait);
LED.DataOut(2);
delay(wait);
LED.DataOut(1);
delay(wait);
}
