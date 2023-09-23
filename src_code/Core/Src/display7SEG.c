/*
 * display7SEG.c
 *
 *  Created on: Sep 22, 2023
 *      Author: dinhq
 */

#include "main.h"
#include "display7SEG.h"

int index_led=0;
int led_buffer[4]={1,7,5,2};

void clearSignal(){
	HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin,SET);
}

void display7SEG(int num){
	if (num==0){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET);
	}
	else if (num==1){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET);
	}
	else if (num==2){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
	}
	else if (num==3){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
	}
	else if (num==4){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
	}
	else if (num==5){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
	}
	else if (num==6){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
	}
	else if (num==7){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET);

	}
	else if (num==8){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
	}
	else if (num==9){
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
	}
}

void update7SEG(int index){
	switch (index){
		case 0:
			clearSignal();
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			display7SEG(led_buffer[0]);
			break;
		case 1:
			clearSignal();
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(led_buffer[1]);
			break;
		case 2:
			clearSignal();
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			display7SEG(led_buffer[2]);
			break;
		case 3:
			clearSignal();
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(led_buffer[3]);
			break;
	}
}
