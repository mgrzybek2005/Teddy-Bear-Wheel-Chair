// Motor A
int enA = 13;
int in1A = 12;
int in2A = 11;
// Motor B
// int enB = 10;
// int in1B = 9;
// int in2B = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(enA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);

  // pinMode(enB, OUTPUT);
  // pinMode(in1B, OUTPUT);
  // pinMode(in2B, OUTPUT);


  digitalWrite(enA, HIGH);
  // digitalWrite(enB, LOW);

  Serial.println("Begin");
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  Serial.println("A: HIGH LOW.");

  delay(3000);

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);

  delay(3000);

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  Serial.println("A: LOW HIGH.");

  delay(3000);

  // digitalWrite(in1B, LOW);
  // digitalWrite(in2B, LOW);
  // Serial.println("B: LOW LOW.");


}
