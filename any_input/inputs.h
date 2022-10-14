#pragma once

#define LEN(arr) ((*(&arr+1)) - arr)

static const int input_pins[] = {
  8,  // x - black
  9,  // y - white

  10, // a - green
  11, // b - yellow
  12, // c - blue
};

static const int result_pin = 4;

constexpr const int num_pins = LEN(input_pins);
constexpr const int table_length = pow(2, num_pins);
bool truth_table[table_length][num_pins] = { 0 };

void generate_truth_table ();
void test_one (int i);
void test_all ();
