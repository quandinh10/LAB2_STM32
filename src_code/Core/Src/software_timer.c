/*
 * software_timer.c
 *
 *  Created on: Sep 22, 2023
 *      Author: dinhq
 */

#include "software_timer.h"

int timer1_counter=0;
int timer1_flag=0;

void setTimer1(int duration){
	timer_counter=duration;
	timer_flag=0;
}

void timerRun(){
	if (timer1_counter > 0){
		timer1_counter--;
		if (timer1_counter <= 0){
			timer1_flag=1;
		}
	}
}
