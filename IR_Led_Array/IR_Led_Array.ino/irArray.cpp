/** IR_Led_Array.cpp for controlling 16 IR led flash patterns with 10 bit binary numbers to be able to track in 3d space, entire
 *  cycle will complete in approximently 500 milliseconds per loop
 *  Created by: Anthony R Deyoung Aug 29 2018
 *  Released into the public domain.
 */

 #include "Arduino.h"
 #include "irArray.h"
 #include <MCP23S17.h>
 #include <SPI.h>

 irArray:: irArray (MCP ledExpander)
 {
   ledExpander.begin(); //Start the Led Expander SPI communication
 }

 irArray : : irArray (int ledPins)
 {
    ledExpander.pinMode (ledPins[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16],LOW)// initialize all pins as output

 }
void irArray:: ledArray()//Initialize all IR's to be an array
{
  IR1();IR2();IR3();IR4();IR5();IR6();IR7();IR8();IR9();IR10();IR11();IR12();IR13();IR14();IR15();IR16();
}

void irArray : : IR1 () //Blink binary 10 bit 0000000101 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[1], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR2 () //Blink binary 10 bit 0000001010 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[2], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR3 () //Blink binary 10 bit 0000010100 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[3], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR4 () //Blink binary 10 bit 0000101000 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[4], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR5 () //Blink binary 10 bit 0001010000 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[5], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR6 () //Blink binary 10 bit 0010100000 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[6], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR7 () //Blink binary 10 bit 0101000000 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[7], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR8 () //Blink binary 10 bit 1010000000 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[8], HIGH);   // (1)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[8], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR9 () //Blink binary 10 bit 0000000011 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[9], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[9], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR10 () //Blink binary 10 bit 0000000110 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[10], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[10], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR11 () //Blink binary 10 bit 0000001100 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[11], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR12 () //Blink binary 10 bit 0000011000 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[12], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR13 () //Blink binary 10 bit 0000110000 in 31.25 milliseconds

{
 ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

 ledExpander.digitalWrite(ledPins[13], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR14 () //Blink binary 10 bit 0001100000 in 31.25 milliseconds

{
  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[14], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR15 () //Blink binary 10 bit 0011000000 in 31.25 milliseconds

{
  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[15], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}

void irArray : : IR16 () //Blink binary 10 bit 0110000000 in 31.25 milliseconds

{
  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);// wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], HIGH);   // (1)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds

  ledExpander.digitalWrite(ledPins[16], LOW);   // (0)
  delay(3.125);               // wait for a 3.125 milliseconds
}
