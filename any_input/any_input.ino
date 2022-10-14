/** 
Divines the truth table for a n-input circuit and tests it using arduino digital outputs
*/

#include "inputs.h"
#include <math.h>

void setup () {
    Serial.begin(9600);

    Serial.println("\nBeginning tests");
    generate_truth_table();

    for ( const auto& pin : input_pins ) pinMode(pin, OUTPUT);

    pinMode(result_pin, INPUT);

    delay(10);

    test_all();
}

int incomingByte = 0;
void loop () {
    // Set serial message send to "No Line Ending" so that it doesn't test 0 after each read
    if (Serial.available() > 0) {
        // read the incoming byte:
        incomingByte = Serial.parseInt();

        // say what you got:
        Serial.println("Testing row:");
        test_row(incomingByte);
        Serial.println("");
    }
}
