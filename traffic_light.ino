// Definition der Pins für die LEDs
const int redLED = 9;
const int yellowLED = 10;
const int greenLED = 11;

void setup() {
  // Definieren der LED-Pins als Ausgang
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Rote Phase
  digitalWrite(redLED, HIGH);   // Rote LED ein
  digitalWrite(yellowLED, LOW); // Gelbe LED aus
  digitalWrite(greenLED, LOW);  // Grüne LED aus
  delay(5000);                  // 5 Sekunden warten

  // Rot-Gelbe Phase
  digitalWrite(redLED, HIGH);   // Rote LED ein
  digitalWrite(yellowLED, HIGH);// Gelbe LED ein
  digitalWrite(greenLED, LOW);  // Grüne LED aus
  delay(2000);                  // 2 Sekunden warten

  // Grüne Phase
  digitalWrite(redLED, LOW);    // Rote LED aus
  digitalWrite(yellowLED, LOW); // Gelbe LED aus
  digitalWrite(greenLED, HIGH); // Grüne LED ein
  delay(5000);                  // 5 Sekunden warten

  // Gelbe Phase
  digitalWrite(redLED, LOW);    // Rote LED aus
  digitalWrite(yellowLED, HIGH);// Gelbe LED ein
  digitalWrite(greenLED, LOW);  // Grüne LED aus
  delay(2000);                  // 2 Sekunden warten
}
