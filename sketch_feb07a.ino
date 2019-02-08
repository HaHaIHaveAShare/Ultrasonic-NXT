void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT); // "SDA"
  pinMode(7, OUTPUT); // "SCL"
}

void loop() {
  digitalWrite(3, HIGH); // Start
  digitalWrite(7, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);

  digitalWrite(7, LOW); // Write bit 1 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 2 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 3 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 4 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 5 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 6 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 7 of 8 in 0x02
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 8 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  Serial.print("Waiting for ACK\n");

  pinMode(3, INPUT); // Wait for ACK
  while (digitalRead(3) != LOW);
  pinMode(3, OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  Serial.print("ACKED\n");

  digitalWrite(7, LOW); // Write bit 1 of 8 in 0x08
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 2 of 8 in 0x08
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 3 of 8 in 0x08
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 4 of 8 in 0x08
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 5 of 8 in 0x08
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 6 of 8 in 0x08
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 7 of 8 in 0x08
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 8 of 8 in 0x08
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  pinMode(3, INPUT); // Wait for ACK
  while (digitalRead(3) != LOW);
  pinMode(3, OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Stop
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(3, HIGH);

  digitalWrite(7, LOW); // Cycle clock

  digitalWrite(3, HIGH); // Start
  digitalWrite(7, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);

  digitalWrite(7, LOW); // Write bit 1 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 2 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 3 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 4 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 5 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 6 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 7 of 8 in 0x02
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Write bit 8 of 8 in 0x02
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  pinMode(3, INPUT); // Wait for ACK
  while (digitalRead(3) != LOW);
  pinMode(3, OUTPUT);
  digitalWrite(7, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);

  digitalWrite(7, LOW); // Stop
  digitalWrite(3, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(3, HIGH);

  Serial.print("Transmition Complete\n");

  int whatWasRead = 0;

  


  
}
