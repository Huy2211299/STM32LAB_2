/*
 * sorfware_timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: VO HOANG HUY
 */

#ifndef INC_SORFWARE_TIMER_H_
#define INC_SORFWARE_TIMER_H_

#include "main.h"

#define MAX_LED 4
#define MAX_LED_MATRIX 8

extern int hour, minute, second;
void clock();

void display7SEG(int num);
void update7SEG ( int index );

extern int index_led;
extern int led_buffer [];
void updateClockBuffer () ;

extern int index_led_matrix;
extern uint8_t matrix_buffer [];
void displayLEDMatrix(int row, int col);
void updateLEDMatrix (int index );
void updateLEDMatrixBuffer();

extern int timer1_flag;
void setTimer1(int duration);

extern int timer2_flag;
void setTimer2(int duration);

extern int timer3_flag;
void setTimer3(int duration);

extern int timer4_flag;
void setTimer4(int duration);

extern int timer5_flag;
void setTimer5(int duration);

void timerRun();

#endif /* INC_SORFWARE_TIMER_H_ */
