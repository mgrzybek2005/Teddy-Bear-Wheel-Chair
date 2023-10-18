int enA = 5;
int in1A = 7;
int in2A = 6;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(enA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);

  digitalWrite(enA, HIGH);

  Serial.println("Begin");
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  Serial.println("HIGH LOW.");

  delay(1500);

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  Serial.println("Stopped.");\

  delay(1500);
  
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  Serial.println("LOW HIGH.");

  delay(1500);

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  Serial.println("Stopped.");

  delay(1500);
}
