#include "control_7_seg.h"
#include "stm32f103x6.h"
#include "stm32f1xx_hal_conf.h"

void display7SEG(uint8_t num, GPIO_TypeDef *port, uint16_t arr_led7seg_pin[7]){

  uint8_t code = (num <= 9) ? seg_code[num] : 0x7F;
  for(int i = 0; i < 7; i++){
    GPIO_PinState state = (code & (1 << i)) ? GPIO_PIN_SET : GPIO_PIN_RESET;
    HAL_GPIO_WritePin(port, arr_led7seg_pin[i], state);
  }
}