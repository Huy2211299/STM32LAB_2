/*
 * sorfware_timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: VO HOANG HUY
 */

#ifndef INC_SORFWARE_TIMER_H_
#define INC_SORFWARE_TIMER_H_

#include "main.h"
extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void display7SEG(int num);
void run_exercise3();

void timerRun();

#endif /* INC_SORFWARE_TIMER_H_ */
