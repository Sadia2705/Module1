// C++ code
//
const uint8_t motion_pin =2;
const uint8_t led_pin =5;

//Globals
uint8_t led_state = LOW;

void setup()
{
  pinMode(motion_pin, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(motion_pin),toggle, FALLING);
  Serial.begin(9600);  

}

void loop()
{
  delay(500);
   
}
void toggle(){
  led_state =!led_state;
  digitalWrite(led_pin, led_state);
  Serial.println("Motion Detected");
}