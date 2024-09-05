# Running Text LCD

- This project demonstrates a simple running text display using a 16x2 LCD and an Arduino. The text scrolls from right to left, creating a running text effect.

# Features

- Displays a scrolling message on a 16x2 LCD.
- Text scrolls automatically across the screen.

# Components

- Arduino Uno = 1 unit;
- 16x2 LCD Display = 1 unit;
- Potentiometer 10kΩ = 1 unit (for contrast adjustment);
- Jumper Wires;
- Breadboard / Project Board.

# Pin Configuration

- **LCD Pin Connections**:
  - VSS → GND Arduino
  - VDD → 5V Arduino
  - Vo (Contrast) → Potentiometer
  - RS → Pin 12 Arduino
  - E → Pin 11 Arduino
  - DB4 → Pin 5 Arduino
  - DB5 → Pin 4 Arduino
  - DB6 → Pin 3 Arduino
  - DB7 → Pin 2 Arduino
  - VCC (A) → 5V Arduino
  - GND (K) → GND Arduino

# How It Works

- **Initialization**: The program initializes the 16x2 LCD in the setup() function.
- **Running Text**: The text "Halo!" is displayed on the LCD, and the screen scrolls the text to the right in a loop.

# Code Explanation

```cpp
#include <LiquidCrystal.h>
const int PIN_RS = 12;
const int PIN_E = 11;
const int PIN_DB_4 = 5;
const int PIN_DB_5 = 4;
const int PIN_DB_6 = 3;
const int PIN_DB_7 = 2;
LiquidCrystal lcd(PIN_RS, PIN_E, PIN_DB_4, PIN_DB_5, PIN_DB_6, PIN_DB_7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  int i;
  lcd.setCursor(0, 0);
  lcd.print("Halo!");
  for (i = 0; i < 16; i++) {
    lcd.scrollDisplayRight();
    delay(250);
  }
}
```

- The LiquidCrystal library is used to control the LCD.
- The lcd.scrollDisplayRight() function is called in a loop to create the scrolling text effect.
- The delay of 250 ms between scrolls controls the speed of the running text.

# Usage

- Connect the components as per the pin configuration.
- Upload the code to your Arduino Uno.
- Power the Arduino and observe the running text on the LCD.

# Conclusion

- This simple project demonstrates how to create a running text effect on a 16x2 LCD using Arduino. It’s a great starting point for projects that need dynamic text displays.
- This program functions to create Running Text on the LCD according to the programmed text.

<br/>

"# Running-Text-LCD"
