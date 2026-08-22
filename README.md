# Arduino Joystick X-Axis & Button LED Control

[TR] Bu proje, XY Joystick modülünün X ekseninden okunan analog sinyallere ve entegre butonuna (SW) göre 4 adet LED'in durumunu kontrol eder.
[EN] This project controls the state of 4 LEDs based on analog signals from the X-axis and the integrated push-button (SW) of an XY Joystick module.

---

## Donanım Gereksinimleri / Hardware Requirements
- 1x Arduino Uno
- 1x XY Joystick Modülü / Module
- 4x 5mm LED
- 4x 220 ohm Direnç / Resistor
- Breadboard & Jumper Kablolar / Jumper Wires

## Bağlantı Şeması / Pin Configuration
- **Joystick VRx:** `A0`
- **Joystick SW (Buton):** Dijital Pin `2`
- **Joystick +5V:** `5V`
- **Joystick GND:** `GND`
- **LED 1 (Sol / Left):** Pin `8`
- **LED 2 (Orta / Center):** Pin `9`
- **LED 3 (Sağ / Right):** Pin `10`
- **LED 4 (Buton / Button):** Pin `13`

## Çalışma Mantığı / Working Principle
- **Buton Basıldığında / Button Pressed:** 4. LED (Pin 13) aktif olur, diğer LED'ler söner.
- **Joystick Hareketi / Joystick Movement:**
  - **X < 300 (Sol / Left):** LED 1 (Pin 8) aktif.
  - **300 <= X <= 700 (Merkez / Center):** LED 2 (Pin 9) aktif.
  - **X > 700 (Sağ / Right):** LED 3 (Pin 10) aktif.
