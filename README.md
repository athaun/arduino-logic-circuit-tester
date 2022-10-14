## Arduino Logic Circuit Tester
Generates a truth table for a n-input circuit and tests the output circuit for every combination of input values. Reports the output as a boolean and a voltage.

### Usage example - configure in inputs.h
```c
int input_pins[] = {
  8,  // a - green
  9,  // b - yellow
  10, // c - blue
  11  // d - black
};
int result_pin = 4; // White
// Default analog read pin is A0 - also white
```

### Test by sending row numbers over serial:
Make sure that the serial message box is set to "No Line Ending" so that it doesn't test 0 after each read. 
![image](https://user-images.githubusercontent.com/32278830/192028512-d41909c8-a9f5-449c-b721-296458163224.png)

### Physical Setup
![image](https://user-images.githubusercontent.com/32278830/190841015-2518a515-1e9b-4bae-a06d-ce9536c72f72.png)
![image](https://user-images.githubusercontent.com/32278830/190872592-ae459164-e2aa-4938-81ea-54ebda65242c.png)

