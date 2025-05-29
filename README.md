# Light-Controlled LED using LDR

This project controls an LED based on the surrounding light intensity using a Light Dependent Resistor (LDR) and Arduino Uno.

## 🛠 Components
- Arduino Uno
- LDR (Light Dependent Resistor)
- 10kΩ resistor
- 220Ω resistor
- LED
- Jumper wires
- Breadboard

## ⚙️ How It Works
- LDR gives an analog input based on light intensity.
- Arduino reads the value using `analogRead()`.
- If it's dark (below threshold), the LED turns ON.
- If it's bright, the LED stays OFF.

## 🧪 Code
```cpp
const int ldrPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
