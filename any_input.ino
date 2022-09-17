/** 
Divines the truth table for a n-input circuit and tests it using arduino digital outputs
*/

#include "inputs.h"
#include <math.h>

void setup () {
    Serial.begin(9600);

    Serial.println("\nBeginning tests");
    generate_truth_table();

    for (int i = 0; i < num_pins; i ++) {
        pinMode(input_pins[i], OUTPUT);
    }

    pinMode(result_pin, INPUT);

    delay(10);    

    test_all();
}

void loop () {}
