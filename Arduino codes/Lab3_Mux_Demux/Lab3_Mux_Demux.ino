int S0, S1, I0, I1, I2, I3;

void setup() {
  pinMode(2, OUTPUT); // S0
  pinMode(3, OUTPUT); // S1
  pinMode(4, OUTPUT); // I0
  pinMode(5, OUTPUT); // I1
  pinMode(6, OUTPUT); // I2
  pinMode(7, OUTPUT); // I3

  Serial.begin(9600);
  Serial.setTimeout(100); // Set a timeout to avoid reading incomplete data
}

void loop() {
  Serial.print("\nEnter S0 (0 or 1): ");
  while (!Serial.available()) {}
  S0 = Serial.parseInt();
  digitalWrite(2, S0);
  Serial.println(S0);

  // Clear the input buffer
  while (Serial.available()) {
    Serial.read();
  }

  Serial.print("Enter S1 (0 or 1): ");
  while (!Serial.available()) {}
  S1 = Serial.parseInt();
  digitalWrite(3, S1);
  Serial.println(S1);

  // Clear the input buffer
  while (Serial.available()) {
    Serial.read();
  }

  Serial.print("Enter I0 (0 or 1): ");
  while (!Serial.available()) {}
  I0 = Serial.parseInt();
  digitalWrite(4, I0);
  Serial.println(I0);

  // Clear the input buffer
  while (Serial.available()) {
    Serial.read();
  }

  Serial.print("Enter I1 (0 or 1): ");
  while (!Serial.available()) {}
  I1 = Serial.parseInt();
  digitalWrite(5, I1);
  Serial.println(I1);

  // Clear the input buffer
  while (Serial.available()) {
    Serial.read();
  }

  Serial.print("Enter I2 (0 or 1): ");
  while (!Serial.available()) {}
  I2 = Serial.parseInt();
  digitalWrite(6, I2);
  Serial.println(I2);

  // Clear the input buffer
  while (Serial.available()) {
    Serial.read();
  }

  Serial.print("Enter I3 (0 or 1): ");
  while (!Serial.available()) {}
  I3 = Serial.parseInt();
  digitalWrite(7, I3);
  Serial.println(I3);

  // Clear the input buffer
  while (Serial.available()) {
    Serial.read();
  }
}
