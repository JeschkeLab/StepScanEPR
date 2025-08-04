int interruptPin = 2;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, FALLING);
}
void loop() {
}
void blink(){
  Serial.println(1);
}