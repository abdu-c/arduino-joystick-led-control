# Arduino Joystick X-Axis LED Control

[TR] Bu proje, bir XY Joystick modülünün X ekseninden okunan analog sinyallere göre 3 adet LED'in durumunu kontrol eder.
[EN] This project controls the state of 3 LEDs based on analog signals read from the X-axis of an XY Joystick module.

---

## Donanım Gereksinimleri / Hardware Requirements
- 1x Arduino Uno
- 1x XY Joystick Modülü / Module
- 3x 5mm LED
- 3x 220 ohm Direnç / Resistor
- Breadboard & Jumper Kablolar / Jumper Wires

## Bağlantı Şeması / Pin Configuration
- **Joystick VRx:** `A0`
- **Joystick +5V:** `5V`
- **Joystick GND:** `GND`
- **LED 1 (Sol / Left):** Pin `8`
- **LED 2 (Orta / Center):** Pin `9`
- **LED 3 (Sağ / Right):** Pin `10`

## Çalışma Mantığı / Working Principle
Analog giriş pini (`A0`), 0 ile 1023 arasında bir değer üretir:
- **X < 300 (Sol / Left):** LED 1 (Pin 8) aktif hale gelir.
- **300 <= X <= 700 (Merkez / Center):** LED 2 (Pin 9) aktif hale gelir.
- **X > 700 (Sağ / Right):** LED 3 (Pin 10) aktif hale gelir.
