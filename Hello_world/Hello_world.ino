//Sketch to print to screen
//6/27/15

void setup() {
  Serial.begin(9600); // open a 9600 baud communication line to computer

}

void loop() {
  Serial.println("hello");
  delay(1000);
  Serial.println("world.");
  delay(1000);

}
