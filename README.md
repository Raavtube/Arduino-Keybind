# Arduino-Keybind

# -------------Setup-------------
A - J are push buttons with an IN and OUT
WIRING!!!
*EMAIL me at info@raavcorp.com if you have any questions.*
Parentheses mean it is connected on the breadboard.
*11 - (A - GND) - GND<br>*
*10 - (B - GND) - GND<br>*
*9 - (C - GND) - GND<br>*
*8 - (D - GND) - GND<br>*
*7 - (E - GND) - GND<br>*
*6 - (F - GND) - GND<br>*
*5 - (G - GND) - GND<br>*
*4 - (H - GND) - GND<br>*
*3 - (I - GND) - GND<br>*
*2 - (J - GND) - GND<br>*

# How it works:

It turns pins 2 - 11 on.
If the button or key is pushed the digitalRead will get an input back.
If the input recived is the correct input it will print to serial the button that is pressed then press the certain keybinds assigned to that key.

# KEY ASSIGNMENTS:
A - RSHIFT + F5 <br>
B - RSHIFT + F6<br>
C - RSHIFT + F7<br>
D - RSHIFT + F8<br>
E - RSHIFT + F9<br>
F - RSHIFT + F10<br>
G - RSHIFT + F11<br>
H - RSHIFT + F12<br>
I - RCTRL + RSHIFT + F5<br>
J - RCTRL + RSHIFT + F6<br>

It will press each key for 100 miliseconds or for a 10th of a second.
