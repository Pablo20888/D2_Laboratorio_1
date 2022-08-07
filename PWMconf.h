/* 
 * File:   PWMconf.h
 * Author: Pablo
 *
 * Created on 28 de julio de 2022, 11:11 PM
 */

#ifndef PWMCONF_H
#define	PWMCONF_H
#ifndef _XTAL_FREQ 
#define _XTAL_FREQ 8000000
#endif
#include <stdint.h>
#include <xc.h>
#include "PWMconf.h"
void pwm_init (uint8_t channel);
void pwm_duty_cycle (uint8_t duty_cycle);

unsigned short map(uint8_t val, uint8_t input_small, uint8_t input_max, 
                unsigned short out_min, unsigned short out_max);
#endif	/* PWMCONF_H */









