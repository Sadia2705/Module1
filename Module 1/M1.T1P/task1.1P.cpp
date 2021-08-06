// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Motion Detected");
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(13, LOW);
    Serial.println("No Motion Detected");
    delay(1000); // Wait for 1000 millisecond(s)
  }
}