// Motor A Pin Declarations
int enA = 13;
int in1A = 12;
int in2A = 11;

// MOTOR B UNOPERATIONALE FOR PROTOTYPE
// Motor B Pin Declarations
// int enB = 10;
// int in1B = 9;
// int in2B = 8;

void setup() {

  Serial.begin(9600);

  // Motor A Pin Setup
  pinMode(enA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);

  // Motor B Pin Setup
  // pinMode(enB, OUTPUT);
  // pinMode(in1B, OUTPUT);
  // pinMode(in2B, OUTPUT);

  // Enabling Both Motors
  digitalWrite(enA, HIGH);
  // digitalWrite(enB, LOW);

  // Show that Serial is active
  Serial.println("Begin");
}

void loop() {

  // Set pins to move forward
  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  Serial.println("A: HIGH LOW.");

  delay(3000);

  // Stop
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);

  delay(3000);

  // Set pins to move backward
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  Serial.println("A: LOW HIGH.");

  delay(3000);
  
  // Stop
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);

  delay(3000);
}
