# esp32-arduino-log-from0

My hands-on journey learning Arduino, ESP32, and embedded hardware from scratch.

## Also see
- Build logs and photos: (https://hackaday.io/nemo.s4) -Main Portfolio
----------------------------------------------------------------------------------

## What This Is
A running log of everything I'm building and learning with Arduino, ESP32,
sensors, and circuits — code, notes, and small projects as I go, starting
from zero.

----------------------------------------------------------------------------------

## Background
Started August 2026. Following Paul McWhorter's ESP32/Arduino series, also following Math and Science "Engineering Circuit Analysis",
building toward a future in computer hardware engineering.

----------------------------------------------------------------------------------

## Structure
Each folder is a small project or exercise, roughly in the order I did them
(e.g. `01- esp32 blink`, `02- LED blink`, ...).

----------------------------------------------------------------------------------

## Progress log
- 8/25/26 — repo created, starting from bread boarding basics

## 02 — SOS Morse Code Blink
Blinks an LED in Morse code SOS pattern (short-short-short, long-long-long, short-short-short) on an ESP32 Dev Module, following along with Paul McWhorter's Arduino course.

**Hardware:** ESP32 Dev Module, LED + 220Ω resistor on GPIO 4
**Concepts:** ESP32 GPIO pin numbers, named variables, pinMode(), debugging wiring vs. code

## What I learned
- Translating Arduino Uno pin numbers to ESP32 GPIO numbers (they don't map 1:1)
- Using named variables (`blueLEDpin`, `fastBlink`, `slowBlink`) instead of hard coded numbers, so pin and timing values only need to change in one place
- Debugging: moved my jumper wire to test a different GPIO but forgot to update `pinMode()` to match — LED stayed dark even though the code "worked." Fixed by keeping the pin number in a single variable so code and wiring can't drift apart.


## 03 — LED Patterned Blink (9/15/26)
Branched out from my imagination after learning variables from Paul McWhorter.

**Concepts:** wiring multiple LEDs, resistors, jumper wires, GND, patterned blink code

## What I learned
- How to wire 4 LED with resistors, jumper wires, and wires to GND
- How to code a patterned LED blink


## 04 — LED Brightness Comparison (9/21/26)
After learning the analogWrite variable, I branched out on my own imagination and made a LED Brightness Comparison. One LED has low brightness (5) and the other has high brightness (243) showing comparison.

**Concepts:** analogWrite

## What I learned
- How to use the analogWrite variable


## 05 — Area Circumference Serial Print (10/3/26)
Prints the area and circumference of a circle to the Serial Monitor. The radius starts at 2 and grows by 0.5 every second.

**Concepts:** float variables, Serial.print vs Serial.println, built-in PI constant, delay()

## What I learned
- Serial.print() keeps output on one line, and Serial.println() ends the line
- Arduino already defines PI, so declaring my own `float PI` caused a compile error (fixed by deleting it)
- Area grows with r² while circumference grows with r, so area pulls ahead as the radius increases

## Example output
A Circle With Radius of 5.00 Has an area of 78.54 and a Circumference of 31.42

----------------------------------------------------------------------------------

