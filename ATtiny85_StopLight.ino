/*
  A Working Traffic Light
 Turns on and off (in order) Green LED, Yellow LED and Red LED, repeatedly.
 Buy the complete kit @ https://www.tindie.com/products/VolthausLab/classic-attiny85-stop-light-kit/
 http://volthauslab.com
 Written by David Connolly Jan. 24, 2016
 Download a good pinout of the IC and the numbers will make sense then.
 */

// Pin 5 has a Green LED connected, Pin 6 has a Yellow LED connected, Pin 7 has a Red LED.
int greenLed = 0;
int yellowLed = 1;
int redLed = 2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(greenLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000);               // wait for 1 second
  digitalWrite(greenLed, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(yellowLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);
  digitalWrite(yellowLed, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(redLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000);
  digitalWrite(redLed, LOW);    // turn the LED off by making the pin voltage LOW



}
