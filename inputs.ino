#include "inputs.h"

void print_row (bool *row) {
    for (int i = 0; i < num_pins; i ++) {
      Serial.print(row[i]);
    }
    Serial.print(" -> ");
}

void generate_truth_table () {
    Serial.println("Truth Table:");
    for (int i = 0; i < table_length; i ++) {
        int n = i;
        for (int j = num_pins - 1; j >= 0; j --) {
            truth_table[i][j] = (bool)(n % 2);
            n = n / 2;
        }
        // Serial.print(i);
        // Serial.print('\t');
        // print_row(truth_table[i]);
        // Serial.print("f\n");
    }
}

void test_row (int row) {
    Serial.print(row);
    Serial.print('\t');
    
    for (int i = 0; i < num_pins; i ++) {
        digitalWrite(input_pins[i], truth_table[row][i]);
    }
    
    print_row(truth_table[row]);

    delay(10);

    Serial.print(digitalRead(result_pin));
    Serial.print("\t");
    Serial.print(analogRead(A0) * (5.0 / 1023.0));
    Serial.println("V");
}

void test_all () {
  for (int i = 0; i < table_length; i ++) {
    test_row(i);
    delay(200);
  }
  
  Serial.println("Tests Completed\n");
}