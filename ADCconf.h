/* 
 * File:   ADCconf.h
 * Author: Pablo
 *
 * Created on 22 de julio de 2022, 09:11 AM
 */

#ifndef ADCCONF_H
#define	ADCCONF_H
#include <xc.h>
#include <stdint.h>
#include "ADCconf.h"
void adc_init (uint8_t adc_cs, uint8_t vref_plus, uint8_t vref_minus);
void adc_start(uint8_t channel);
uint16_t adc_read (void);

#endif	/* ADCCONF_H */