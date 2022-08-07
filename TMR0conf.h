/* 
 * File:   TMR0conf.h
 * Author: Pablo
 *
 * Created on 28 de julio de 2022, 11:57 PM
 */

#ifndef TMR0CONF_H
#define	TMR0CONF_H

#ifndef _tmr0_value
#define _tmr0_value 178 //Valor a cargar
#endif

#include <stdint.h>
#include <xc.h>
#include "TMR0conf.h"

void tmr0_init (uint8_t prescaler);
uint8_t tmr0_reload_v2 (void);

#endif	/* TMR0CONF_H */

