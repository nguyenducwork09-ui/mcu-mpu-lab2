#include "stm32f1xx.h"

static const uint8_t seg_code[10] = {
  0b01000000, // 0
  0b01111001, // 1
  0b00100100, // 2
  0b00110000, // 3
  0b00011001, // 4
  0b00010010, // 5
  0b00000010, // 6
  0b01111000, // 7
  0b00000000, // 8
  0b00010000  // 9
};
void display7SEG(uint8_t num, GPIO_TypeDef *port, uint16_t arr_led7seg_pin[7]);