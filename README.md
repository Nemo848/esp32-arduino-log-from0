# esp32-arduino-log-from0

My hands-on journey learning Arduino, ESP32, and embedded hardware from scratch.
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
- ## 02 — SOS Morse Code Blink

Blinks an LED in Morse code SOS pattern (short-short-short, long-long-long, short-short-short) on an ESP32 Dev Module, following along with Paul McWhorter's Arduino course.

**What I learned:**
- Translating Arduino Uno pin numbers to ESP32 GPIO numbers (they don't map 1:1)
- Using named variables (`blueLEDpin`, `fastBlink`, `slowBlink`) instead of hard coded numbers, so pin and timing values only need to change in one place
- Debugging: moved my jumper wire to test a different GPIO but forgot to update `pinMode()` to match — LED stayed dark even though the code "worked." Fixed by keeping the pin number in a single variable so code and wiring can't drift apart.

**Hardware:** ESP32 Dev Module, LED + 220Ω resistor on GPIO 4

----------------------------------------------------------------------------------

## Also see
- Build logs and photos: (https://hackaday.io/nemo.s4) -Main Portfolio
