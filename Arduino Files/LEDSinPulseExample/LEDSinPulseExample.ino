int ledPin = 2;
int timeDelay = 1000;
float val;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  val = 127.5 * sin((2 * 3.141 / 10) * (millis() / 1000)) + 127.5;

  analogWrite(ledPin, val);

  // delay(timeDelay);
  // analogWrite(ledPin, 125.7);
  // delay(timeDelay);
  // analogWrite(ledPin, 0);
}
