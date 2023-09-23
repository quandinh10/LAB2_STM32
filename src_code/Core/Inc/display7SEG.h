/*
 * display7SEG.h
 *
 *  Created on: Sep 22, 2023
 *      Author: dinhq
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

//const int MAX_LED = 4;
extern int index_led;
extern int led_buffer[4];

void clearSignal();
void display7SEG(int num);
void update7SEG(int index);
#endif /* INC_DISPLAY7SEG_H_ */
