// Pin configuration
const int ldrPin = A0;    // LDR connected to analog pin A0
const int buzzerPin = 9;  // Buzzer connected to digital pin 9

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the value from the LDR
  int ldrValue = analogRead(ldrPin);

  // Check if the LDR value is greater than 600
  if (ldrValue > 600) {
    // Turn on the buzzer
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Turn off the buzzer
    digitalWrite(buzzerPin, LOW);
  }

  // Print the LDR value to the Serial Monitor for debugging
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Wait for a short duration before reading the LDR again
  delay(100);
}
