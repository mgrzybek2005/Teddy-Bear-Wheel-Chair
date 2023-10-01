int speedPin = 5;
int dir1 = 4;
int dir2 = 3;

float mSpeed = 255;

double myTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  myTime = millis() / 1000;
  mSpeed = 77.5 * cos((2* 3.141 / 10) * myTime) + 177.5;

  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);

  analogWrite(speedPin, mSpeed);
}
