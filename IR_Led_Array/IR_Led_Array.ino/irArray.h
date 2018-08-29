
/* IR_Led_Array.h for controlling 16 IR led flash patterns with 10 bit binary numbers to be able to track in 3d space, entire
 *  cycle will complete in approximently 500 milliseconds per loop
 *  Created by: Anthony R Deyoung Aug 29 2018
 *  Released into the public domain.
 */


#ifndef irArray_h
#define irArray_h

#include "Arduino.h"
#include <MCP23S17.h>
#include <SPI.h>

class irArray;
{
public
irArray(MCP ledExpander);
irArray(int ledPins);
void IR1();
void IR2();
void IR3();
void IR4();
void IR5();
void IR6();
void IR7();
void IR8();
void IR9();
void IR10();
void IR11();
void IR12();
void IR13();
void IR14();
void IR15();
void IR16();
void ledArray();

private
int _ledPins;
MCP _ledExpander;

};
#endif
