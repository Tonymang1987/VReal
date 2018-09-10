#include <SPI.h>

#include <MCP23S17.h>
int period = 2;
unsigned long time_now = 0;


MCP ledExpander(0,10);  // create an object at address 1 called "LedExpander"  Slave Select Pin 10

void setup() 

{
  Serial.begin(115200);
  ledExpander.begin(); //Start the Led Expander SPI communication
  
  
  ledExpander.pinMode(1,HIGH);// initialize all pins as output
  ledExpander.pinMode(2,HIGH);// initialize all pins as output
  ledExpander.pinMode(3,HIGH);// initialize all pins as output
  ledExpander.pinMode(4,HIGH);// initialize all pins as output
  ledExpander.pinMode(5,HIGH);// initialize all pins as output
  ledExpander.pinMode(6,HIGH);// initialize all pins as output
  ledExpander.pinMode(7,HIGH);// initialize all pins as output
  ledExpander.pinMode(8,HIGH);// initialize all pins as output
  ledExpander.pinMode(9,HIGH);// initialize all pins as output
  ledExpander.pinMode(10,HIGH);// initialize all pins as output
  ledExpander.pinMode(11,HIGH);// initialize all pins as output
  ledExpander.pinMode(12,HIGH);// initialize all pins as output
  ledExpander.pinMode(13,HIGH);// initialize all pins as output
  ledExpander.pinMode(14,HIGH);// initialize all pins as output
  ledExpander.pinMode(15,HIGH);// initialize all pins as output
  ledExpander.pinMode(16,HIGH);// initialize all pins as output
}



void loop() 

{
 
ledArray();//Initiallize ledArray Function, Entire array taking 500 milliseconds to complete 1 cycle



}

void ledArray () //Initialize all IR's to be an array
{
   IR_BitSequence_1();
   IR_BitSequence_2();
   IR_BitSequence_3();
   IR_BitSequence_4();
   IR_BitSequence_5();
   IR_BitSequence_6();
   IR_BitSequence_7();
   IR_BitSequence_8();
   IR_BitSequence_9();
   IR_BitSequence_10(); 
}
void IR_BitSequence_1()//0000000100000000 1IR lit
{  
time_now = millis();  
ledExpander.digitalWrite(1, LOW);    // (0)
ledExpander.digitalWrite(2, LOW);    // (0)
ledExpander.digitalWrite(3, LOW);    // (0)
ledExpander.digitalWrite(4, LOW);    // (0)
ledExpander.digitalWrite(5, LOW);    // (0)
ledExpander.digitalWrite(6, LOW);    // (0)
ledExpander.digitalWrite(7, LOW);    // (0)
ledExpander.digitalWrite(8, HIGH);   // (1)
ledExpander.digitalWrite(9, LOW);    // (0)
ledExpander.digitalWrite(10, LOW);   // (0)
ledExpander.digitalWrite(11, LOW);   // (0)
ledExpander.digitalWrite(12, LOW);   // (0)
ledExpander.digitalWrite(13, LOW);   // (0)
ledExpander.digitalWrite(14, LOW);   // (0)
ledExpander.digitalWrite(15, LOW);   // (0)
ledExpander.digitalWrite(16, LOW);   // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}
void IR_BitSequence_2()//0000001000000001 2 ir lit
{
time_now = millis(); 
ledExpander.digitalWrite(1, LOW);    // (0)
ledExpander.digitalWrite(2, LOW);    // (0)
ledExpander.digitalWrite(3, LOW);    // (0)
ledExpander.digitalWrite(4, LOW);    // (0)
ledExpander.digitalWrite(5, LOW);    // (0)
ledExpander.digitalWrite(6, LOW);    // (0)
ledExpander.digitalWrite(7, HIGH);   // (1)
ledExpander.digitalWrite(8, LOW);    // (0)
ledExpander.digitalWrite(9, LOW);    // (0)
ledExpander.digitalWrite(10, LOW);   // (0)
ledExpander.digitalWrite(11, LOW);   // (0)
ledExpander.digitalWrite(12, LOW);   // (0)
ledExpander.digitalWrite(13, LOW);   // (0)
ledExpander.digitalWrite(14, LOW);   // (0)
ledExpander.digitalWrite(15, LOW);   // (0)
ledExpander.digitalWrite(16, HIGH);  // (1)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}
void IR_BitSequence_3() //0000010100000011 4 ir lit
{
time_now = millis();
ledExpander.digitalWrite(1, LOW);    // (0)
ledExpander.digitalWrite(2, LOW);    // (0)
ledExpander.digitalWrite(3, LOW);    // (0)
ledExpander.digitalWrite(4, LOW);    // (0)
ledExpander.digitalWrite(5, LOW);    // (0)
ledExpander.digitalWrite(6, HIGH);   // (1)
ledExpander.digitalWrite(7, LOW);    // (0)
ledExpander.digitalWrite(8, HIGH);   // (1)
ledExpander.digitalWrite(9, LOW);    // (0)
ledExpander.digitalWrite(10, LOW);   // (0)
ledExpander.digitalWrite(11, LOW);   // (0)
ledExpander.digitalWrite(12, LOW);   // (0)
ledExpander.digitalWrite(13, LOW);   // (0)
ledExpander.digitalWrite(14, LOW);   // (0)
ledExpander.digitalWrite(15, HIGH);  // (1)
ledExpander.digitalWrite(16, HIGH);  // (1)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}

void IR_BitSequence_4() // 0000101000000110 4 irs lit
{
time_now = millis();
ledExpander.digitalWrite(1, LOW);     // (0)
ledExpander.digitalWrite(2, LOW);     // (0)
ledExpander.digitalWrite(3, LOW);     // (0)
ledExpander.digitalWrite(4, LOW);     // (0)
ledExpander.digitalWrite(5, HIGH);    // (1)
ledExpander.digitalWrite(6, LOW);     // (0)
ledExpander.digitalWrite(7, HIGH);    // (1)
ledExpander.digitalWrite(8, LOW);     // (0)
ledExpander.digitalWrite(9, LOW);     // (0)
ledExpander.digitalWrite(10, LOW);    // (0)
ledExpander.digitalWrite(11, LOW);    // (0)
ledExpander.digitalWrite(12, LOW);    // (0)
ledExpander.digitalWrite(13, LOW);    // (0)
ledExpander.digitalWrite(14, HIGH);   // (1)
ledExpander.digitalWrite(15, HIGH);   // (1)
ledExpander.digitalWrite(16, LOW);    // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}

void IR_BitSequence_5() //0001010000001100 4 irs lit
{
time_now = millis();
ledExpander.digitalWrite(1, LOW);    // (0)
ledExpander.digitalWrite(2, LOW);    // (0)
ledExpander.digitalWrite(3, LOW);    // (0)
ledExpander.digitalWrite(4, HIGH);   // (1)
ledExpander.digitalWrite(5, LOW);    // (0)
ledExpander.digitalWrite(6, HIGH);   // (1)
ledExpander.digitalWrite(7, LOW);    // (0)
ledExpander.digitalWrite(8, LOW);    // (0)
ledExpander.digitalWrite(9, LOW);    // (0)
ledExpander.digitalWrite(10, LOW);   // (0)
ledExpander.digitalWrite(11, LOW);   // (0)
ledExpander.digitalWrite(12, LOW);   // (0)
ledExpander.digitalWrite(13, HIGH);  // (1)
ledExpander.digitalWrite(14, HIGH);  // (1)
ledExpander.digitalWrite(15, LOW);   // (0)
ledExpander.digitalWrite(16, LOW);   // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}
void IR_BitSequence_6() //0010100000011000 4 irs lit
{
time_now = millis();
ledExpander.digitalWrite(1, LOW);    // (0)
ledExpander.digitalWrite(2, LOW);    // (0)
ledExpander.digitalWrite(3, HIGH);   // (1)
ledExpander.digitalWrite(4, LOW);    // (0)
ledExpander.digitalWrite(5, HIGH);   // (1)
ledExpander.digitalWrite(6, LOW);    // (0)
ledExpander.digitalWrite(7, LOW);    // (0)
ledExpander.digitalWrite(8, LOW);    // (0)
ledExpander.digitalWrite(9, LOW);    // (0)
ledExpander.digitalWrite(10, LOW);   // (0)
ledExpander.digitalWrite(11, LOW);   // (0)
ledExpander.digitalWrite(12, HIGH);  // (1)
ledExpander.digitalWrite(13, HIGH);  // (1)
ledExpander.digitalWrite(14, LOW);   // (0)
ledExpander.digitalWrite(15, LOW);   // (0)
ledExpander.digitalWrite(16, LOW);   // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}

void IR_BitSequence_7() // 0101000000110000 4 irs lit
{
time_now = millis();
ledExpander.digitalWrite(1, LOW);    // (0)
ledExpander.digitalWrite(2, HIGH);   // (1)
ledExpander.digitalWrite(3, LOW);    // (0)
ledExpander.digitalWrite(4, HIGH);   // (1)
ledExpander.digitalWrite(5, LOW);    // (0)
ledExpander.digitalWrite(6, LOW);    // (0)
ledExpander.digitalWrite(7, LOW);    // (0)
ledExpander.digitalWrite(8, LOW);    // (0)
ledExpander.digitalWrite(9, LOW);    // (0)
ledExpander.digitalWrite(10, LOW);   // (0)
ledExpander.digitalWrite(11, HIGH);  // (1)
ledExpander.digitalWrite(12, HIGH);  // (1)
ledExpander.digitalWrite(13, LOW);   // (0)
ledExpander.digitalWrite(14, LOW);   // (0)
ledExpander.digitalWrite(15, LOW);   // (0)
ledExpander.digitalWrite(16, LOW);   // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}

void IR_BitSequence_8() //1010000001100000 4 irs lit
{
time_now = millis();
ledExpander.digitalWrite(1, HIGH);  // (1)
ledExpander.digitalWrite(2, LOW);   // (0)
ledExpander.digitalWrite(3, HIGH);  // (1)
ledExpander.digitalWrite(4, LOW);   // (0)
ledExpander.digitalWrite(5, LOW);   // (0)
ledExpander.digitalWrite(6, LOW);   // (0)
ledExpander.digitalWrite(7, LOW);   // (0)
ledExpander.digitalWrite(8, LOW);   // (0)
ledExpander.digitalWrite(9, LOW);   // (0)
ledExpander.digitalWrite(10, HIGH); // (1)
ledExpander.digitalWrite(11, HIGH); // (1)
ledExpander.digitalWrite(12, LOW);  // (0)
ledExpander.digitalWrite(13, LOW);  // (0)
ledExpander.digitalWrite(14, LOW);  // (0)
ledExpander.digitalWrite(15, LOW);  // (0)
ledExpander.digitalWrite(16, LOW);  // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}

void IR_BitSequence_9() //0100000011000000 3 irs lit
{
time_now = millis();
ledExpander.digitalWrite(1, LOW);   // (0)
ledExpander.digitalWrite(2, HIGH);  // (1)
ledExpander.digitalWrite(3, LOW);   // (0)
ledExpander.digitalWrite(4, LOW);   // (0)
ledExpander.digitalWrite(5, LOW);   // (0)
ledExpander.digitalWrite(6, LOW);   // (0)
ledExpander.digitalWrite(7, LOW);   // (0)
ledExpander.digitalWrite(8, LOW);   // (0)
ledExpander.digitalWrite(9, HIGH);  // (1)
ledExpander.digitalWrite(10, HIGH); // (1)
ledExpander.digitalWrite(11, LOW);  // (0)
ledExpander.digitalWrite(12, LOW);  // (0)
ledExpander.digitalWrite(13, LOW);  // (0)
ledExpander.digitalWrite(14, LOW);  // (0)
ledExpander.digitalWrite(15, LOW);  // (0)
ledExpander.digitalWrite(16, LOW);  // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}

void IR_BitSequence_10() //1000000010000000 2 irs lit
{
time_now = millis();
ledExpander.digitalWrite(1, HIGH);   // (1)
ledExpander.digitalWrite(2, LOW);   // (0)
ledExpander.digitalWrite(3, LOW);   // (0)
ledExpander.digitalWrite(4, LOW);   // (0)
ledExpander.digitalWrite(5, LOW);   // (0)
ledExpander.digitalWrite(6, LOW);   // (0)
ledExpander.digitalWrite(7, LOW);   // (0)
ledExpander.digitalWrite(8, LOW);   // (0)
ledExpander.digitalWrite(9, HIGH);   // (1)
ledExpander.digitalWrite(10, LOW);  // (0)
ledExpander.digitalWrite(11, LOW);   // (0)
ledExpander.digitalWrite(12, LOW);   // (0)
ledExpander.digitalWrite(13, LOW);   // (0)
ledExpander.digitalWrite(14, LOW);   // (0)
ledExpander.digitalWrite(15, LOW);   // (0)
ledExpander.digitalWrite(16, LOW);   // (0)
while(millis() < time_now + period){
        //wait approx. [period] ms
    }
}



