// Arduino Uno & XY Joystick ile X Ekseni LED Kontrolü
const int led_pin[] = { 8, 9, 10 };
void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(led_pin[i], OUTPUT);
  }
}
// Arduino'nun analogRead(A0) fonksiyonu bize 0 ile 1023 arasında bir değer okur.
void loop() {
  int xdeger = analogRead(A0);
  if (xdeger < 300) {
    digitalWrite(led_pin[0], HIGH);
    digitalWrite(led_pin[1], LOW);
    digitalWrite(led_pin[2], LOW);
  } else if (xdeger > 700) {
    digitalWrite(led_pin[2], HIGH);
    digitalWrite(led_pin[0], LOW);
    digitalWrite(led_pin[1], LOW);

  } else {
    digitalWrite(led_pin[1], HIGH);
    digitalWrite(led_pin[2], LOW);
    digitalWrite(led_pin[0], LOW);
  }
}
