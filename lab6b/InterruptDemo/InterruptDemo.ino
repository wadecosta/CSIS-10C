/* Listing 13-3. Alternative Interrupt Program */
#include <avr/interrupt.h>

#define LEDPIN  13

volatile int state = LOW;

void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(2, INPUT_PULLUP);  // INT0 = PIN2
  pinMode(3, INPUT_PULLUP);  // INT1 = PIN3
  attachInterrupt(0, myISR, FALLING); // 0=PIN2, 1=PIN3, CHANGE, LOW, RISING, FALLING
     //  attachInterrupt connects INT0 which is PIN2 to function myISR,  
     //   whenever a certain event (CHANGE, LOW, RISING, FALLING) takes place on the pin
  sei();                    // turn on interrupts
}

void loop() {
  unsigned long i;
  unsigned long sum = 0;
  
  for (i = 0; i < 4000000; i++)  // Do this just to have 
    sum++;                       // something to interrupt!
}

void myISR()
{
  state = !state;
  digitalWrite(LEDPIN, state);/* interrupt code here */
}

