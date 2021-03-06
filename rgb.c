/****************************************************************************************************
                                   ExploreEmbedded    
 ****************************************************************************************************
 * File:   rgb.c
 * Version: 16.0
 * Author: ExploreEmbedded
 * Website: http://www.exploreembedded.com/wiki
 * Description: File contains the functios to initialize and write the data to RGB leds.

The libraries have been tested on ExploreEmbedded development boards. We strongly believe that the 
library works on any of development boards for respective controllers. However, ExploreEmbedded 
disclaims any kind of hardware failure resulting out of usage of libraries, directly or indirectly.
Files may be subject to change without prior notice. The revision history contains the information 
related to updates. 


GNU GENERAL PUBLIC LICENSE: 
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>. 

Errors and omissions should be reported to codelibraries@exploreembedded.com
 **************************************************************************************************/


#include "lpc17xx.h"
#include "stdutils.h"
#include "gpio.h"
#include "rgb.h"



/***************************************************************************************************
                                void RGB_Init(void)
 ***************************************************************************************************
 * I/P Arguments: none
                              

 * Return value : none

 * description :This function initializes the RGB LED pins as output.  
 ***************************************************************************************************/
void rgbInit(void)
{
    GPIO_init(RGB_RED); 
    GPIO_init(RGB_GREEN); 
    GPIO_init(RGB_BLUE); 
    
    GPIO_output(RGB_RED); 
    GPIO_output(RGB_GREEN); 
    GPIO_output(RGB_BLUE); 
    
    rgbWrite(1,1,1);
}






/***************************************************************************************************
            void rgbWrite(uint8_t redValue, uint8_t greenValue, uint8_t blueValue)
 ***************************************************************************************************
 * I/P Arguments: 
                 uint8_t : Red led to be turned ON(0)/Off(1)
                 uint8_t : Green led to be turned ON(0)/Off(1)
                 uint8_t : Blue led to be turned ON(0)/Off(1)
                              

 * Return value : none

 * description :This function turns on or off the RGB leds  
 ***************************************************************************************************/
void rgbWrite(uint8_t redValue, uint8_t greenValue, uint8_t blueValue)
{
    GPIO_write(RGB_RED,redValue);  
    GPIO_write(RGB_GREEN,greenValue);
    GPIO_write(RGB_BLUE,blueValue);  
}