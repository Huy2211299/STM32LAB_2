/*
 * sorfware_timer.h
 *
 *  Created on: Sep 25, 2024
 *      Author: VO HOANG HUY
 */

#ifndef INC_SORFWARE_TIMER_H_
#define INC_SORFWARE_TIMER_H_

#include "main.h"
extern int timer1_flag;

#define LED_1 1
#define LED_2 2

void setTimer1(int duration);
void chay();
void timerRun();

#endif /* INC_SORFWARE_TIMER_H_ */
