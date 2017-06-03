int lightPin = A0;
int buzzPin = 9;
int LED = 12;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);     
}

void loop() {
  Serial.println(analogRead(lightPin));
  analogRead((lightPin)/2);
  delay(1000);
  
  if (analogRead(0) < 700) { //Nilai sensor ketika kondisi steady
    tone(buzzPin, 300); //frekuensi buzzer 300 Hz
    digitalWrite(LED, LOW);
    delay(1000); //delay 1 detik
    noTone(buzzPin);
    digitalWrite(LED, LOW);
  } else {
    noTone(buzzPin);
    digitalWrite(LED, HIGH);
  }
}