// [TR] Arduino Uno & XY Joystick ile X Ekseni ve Buton Kontrollü LED Sistemi
// [EN] Arduino Uno & XY Joystick X-Axis and Push-Button LED Control System

const int led_pin[] = { 8, 9, 10, 13 };
const int butonPin = 2;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(led_pin[i], OUTPUT);
  }
  pinMode(butonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(butonPin) == LOW) {
    digitalWrite(led_pin[3], HIGH);
    digitalWrite(led_pin[1], LOW);
    digitalWrite(led_pin[2], LOW);
    digitalWrite(led_pin[0], LOW);
  } else {
    digitalWrite(led_pin[3], LOW);




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
}
