/*
 * sorfware_timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: VO HOANG HUY
 */

#ifndef INC_SORFWARE_TIMER_H_
#define INC_SORFWARE_TIMER_H_

#include "main.h"

void display7SEG(int num);

extern int timer1_flag;
void setTimer1(int duration);

extern int timer2_flag;
void setTimer2(int duration);

extern int timer3_flag;
void setTimer3(int duration);

void timerRun();


#endif /* INC_SORFWARE_TIMER_H_ */
