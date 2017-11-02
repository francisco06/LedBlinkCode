


void setup() {
  pinMode(13, OUTPUT);
}
void countToThreeLED(number) {
  if number == 1
    digitalWrite(13, HIGH)
    delay(1000)
    digitalWrite(13, LOW)
    delay(1000)
  else if number == 2
    digitalWrite(13, HIGH)
    delay(2000)
    digitalWrite(13, HIGH)
    delay(2000)
  else
    digitalWrite(13, HIGH)
    delay(3000)
    digitalWrite(13, HIGH)
    delay(3000)
}
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       
}
