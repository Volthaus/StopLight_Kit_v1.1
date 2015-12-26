/*
 ATtiny85 Traffic Light
 Turns on (in order) Green LED, Yellow LED and Red LED, repeatedly.
 
 Written by David Connolly - Volthaus Electronics Laboratory 
 Jan. 9, 2014
 */

// Pin 0 has a Green LED connected, Pin 3 has a Yellow LED connected, Pin 4 has a Red LED.
int greenLed = 0;
int yellowLed = 3;
int redLed = 4;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(greenLed, HIGH);   // turn the Green LED on 
  delay(15000);               // Green LED stays on for 15 seconds
  digitalWrite(greenLed, LOW);    // turn the LED off by making the pin 0 voltage LOW
  digitalWrite(yellowLed, HIGH);   // turn on the Yellow LED 
  delay(5000);                    // Yellow LED stays on for 5 seconds
  digitalWrite(yellowLed, LOW);    // turn the Yellow LED off by making the pin 3 voltage LOW
  digitalWrite(redLed, HIGH);   // turn the Red LED on 
  delay(10000);                 // Red LED stay on for 10 seconds
  digitalWrite(redLed, LOW);    // turn the LED off by making the pin 4 voltage LOW



}

