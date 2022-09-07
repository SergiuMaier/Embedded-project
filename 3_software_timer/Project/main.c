/*
 * Project.c
 *
 * Created: 8/30/2022 09:28:50 PM
 * Author : Sergiu Maier
 */ 

#include "main_defines.h"
#include "timer0_func_def.h"
#include "main_func.h"
#include "main_mcu_init.h"

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main(void){
	
	init_devices();	//porturi, timer, intreruperi
	start_timer0(); 
	
	timere[0] = creeaza_timer(1, PORNIT, TRUE, 0, 3000, pin_toggle_led0);
	timere[1] = creeaza_timer(2, PORNIT, TRUE, 0, 6000, pin_toggle_led1);
	timere[2] = creeaza_timer(3, PORNIT, TRUE, 0, 9000, pin_toggle_led2);
	
	do
	{	
		start_evaluare();
		
		
	}while(1);
}



