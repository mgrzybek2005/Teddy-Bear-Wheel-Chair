int enA = 7;
int in1A = 8;
int in2A = 9;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(enA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);

  digitalWrite(enA, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  Serial.println("Spinning in one direction.");

  delay(1500);

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  Serial.println("Stopped.");\

  delay(1500);
  
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  Serial.println("Spinning in one direction.");

  delay(1500);

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  Serial.println("Stopped.");

  delay(1500);
}
