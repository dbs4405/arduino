/*
 * My first Arduino sketch!!! 
 * Date: 6/21/15
 * Author: David Schiele (adapted from http://antipastohw.blogspot.com/2009/12/first-10-things-everyone-does-with.html)
 */

int ledPin = 13;

//setup runs once

void setup() {
  //initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

//loop runs as long as Ard. has power
void loop() {
  digitalWrite(ledPin, HIGH); //turns LED on
  delay(3000);               //waits .5 seconds
  digitalWrite(ledPin, LOW);  //Turns LED off
  delay(100);                 //                
}



