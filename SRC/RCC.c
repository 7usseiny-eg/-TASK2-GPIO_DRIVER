/********************************************** 
* Module: RCC Driver
*
* File Name: RCC.c
*
* Description: RCC Driver
*
* LAYER: MCAL
*
* Author: Omar El Hussein

**********************************************/

#include "RCC.h"

void vRCC_SetSYSCLK(clkSrcName_t clkSrc, HSESrcName_t HSESRC, PLLSrcName_t PLLSRC, AHBPreValue_t AHB_Prescaler, APB1_PreValue_t APB1_Prescaler, APB2_PreValue_t APB2_Prescaler){
	switch(clkSrc){
		case HSI:
			SET_BIT(RCC_CR, 0); // ENABLE HSI
		
			//SET SYSCLK TO HSI
			CLEAR_BIT(RCC_CFGR, 0); // SETS THE CFGR REGISTER TO 0 in BIT 1 and 0 IN BIT 0, HERE WE CLEARED BIT 0
			CLEAR_BIT(RCC_CFGR, 1); // HERE WE CLEARED BIT 1
			break;
		case HSE:
			
			SET_BIT(RCC_CR, 16); //ENABLING HSE
		
			switch(HSESRC){
				
				case HSE_RC:
					
					SET_BIT(RCC_CR, 18); //IF I AM USING RC CIRCUIT, YOU BYPASS XTAL1
				
					break;
				
				case HSE_Crystal:
					
					CLEAR_BIT(RCC_CR, 18); //IF I AM USING CRYSTAL, YOU DON'T BYPASS XTAL1
				
					break;
				
				default: break;
				
			}
			
			//SET SYSCLK TO HSE
			SET_BIT(RCC_CFGR, 0); // SETS THE CFGR REGISTER TO 0 in BIT 1 and 1 IN BIT 0, HERE WE SET BIT 0
			CLEAR_BIT(RCC_CFGR, 1); // HERE WE CLEARED BIT 1
			
			break;
		case PLL:
			
			SET_BIT(RCC_CR, 24); // ENABLE PLL
		
			switch(PLLSRC){
				
				case HSE:
					
					SET_BIT(RCC_CR, 1); // ENABLE HSE
				
					switch(HSESRC){
						
						case HSE_RC:
							
							SET_BIT(RCC_CR, 18); // BYPASS XTAL 1 IN CASE OF RC
						
						case HSE_Crystal:
							
							CLEAR_BIT(RCC_CR, 18); // DONT BYPASS XTAL 1 IN CASE OF CRYSTAL
					}
					
					SET_BIT(RCC_PLLCFGR, 22); // SET IT TO 1 TO USE HSE
					
					break;
				case HSI:
					
					SET_BIT(RCC_CR, 0); // ENABLE HSI
				
					CLEAR_BIT(RCC_PLLCFGR, 22); // PLL SRC AS HSI
				
					break;
			}
			//SET SYSCLK TO PLL
			CLEAR_BIT(RCC_CFGR, 0); // CLEAR BIT 0
			SET_BIT(RCC_CFGR, 1); // SET BIT 1
			break;
	}
	
	

	switch(AHB_Prescaler){
		case AHB_Pre1:
			CLEAR_BIT(RCC_CFGR, 7);
			break;
		case AHB_Pre2:
			SET_BIT(RCC_CFGR, 7);
			CLEAR_BIT(RCC_CFGR, 6);
			CLEAR_BIT(RCC_CFGR, 5);
			CLEAR_BIT(RCC_CFGR, 4);
			break;
		case AHB_Pre4:
			SET_BIT(RCC_CFGR, 7);
			CLEAR_BIT(RCC_CFGR, 6);
			CLEAR_BIT(RCC_CFGR, 5);
			SET_BIT(RCC_CFGR, 4);			
			break;
		case AHB_Pre8:
			SET_BIT(RCC_CFGR, 7);
			CLEAR_BIT(RCC_CFGR, 6);
			SET_BIT(RCC_CFGR, 5);
			CLEAR_BIT(RCC_CFGR, 4);			
			break;
		case AHB_Pre16:
			SET_BIT(RCC_CFGR, 7);
			CLEAR_BIT(RCC_CFGR, 6);
			SET_BIT(RCC_CFGR, 5);
			SET_BIT(RCC_CFGR, 4);			
			break;
		case AHB_Pre64:
			SET_BIT(RCC_CFGR, 7);
			SET_BIT(RCC_CFGR, 6);
			CLEAR_BIT(RCC_CFGR, 5);
			CLEAR_BIT(RCC_CFGR, 4);			
			break;
		case AHB_Pre128:
			SET_BIT(RCC_CFGR, 7);
			SET_BIT(RCC_CFGR, 6);
			CLEAR_BIT(RCC_CFGR, 5);
			SET_BIT(RCC_CFGR, 4);			
			break;
		case AHB_Pre256:
			SET_BIT(RCC_CFGR, 7);
			SET_BIT(RCC_CFGR, 6);
			SET_BIT(RCC_CFGR, 5);
			CLEAR_BIT(RCC_CFGR, 4);					
			break;
		case AHB_Pre512:
			SET_BIT(RCC_CFGR, 7);
			SET_BIT(RCC_CFGR, 6);
			SET_BIT(RCC_CFGR, 5);
			SET_BIT(RCC_CFGR, 4);				
			break;
	}
	switch(APB1_Prescaler){
		case APB1_Pre1:
			CLEAR_BIT(RCC_CFGR, 12);			
			break;
		case APB1_Pre2:
			SET_BIT(RCC_CFGR, 12);
			CLEAR_BIT(RCC_CFGR, 11);
			CLEAR_BIT(RCC_CFGR, 10);			
			break;
		case APB1_Pre4: 
			SET_BIT(RCC_CFGR, 12);
			CLEAR_BIT(RCC_CFGR, 11);
			SET_BIT(RCC_CFGR, 10);		
			break;
		case APB1_Pre8: 
			SET_BIT(RCC_CFGR, 12);
			SET_BIT(RCC_CFGR, 11);
			CLEAR_BIT(RCC_CFGR, 10);
			break;
		case APB1_Pre16: 
			SET_BIT(RCC_CFGR, 12);
			SET_BIT(RCC_CFGR, 11);
			SET_BIT(RCC_CFGR, 10);
			break;
	}
	
	switch(APB2_Prescaler){
		case APB2_Pre1:
			CLEAR_BIT(RCC_CFGR, 15);
			break;
		case APB2_Pre2:
			SET_BIT(RCC_CFGR, 15);
			CLEAR_BIT(RCC_CFGR, 14);
			CLEAR_BIT(RCC_CFGR, 13);
			break;
		case APB2_Pre4:
			SET_BIT(RCC_CFGR, 15);
			CLEAR_BIT(RCC_CFGR, 14);
			SET_BIT(RCC_CFGR, 13);			
			break;
		case APB2_Pre8: 
			SET_BIT(RCC_CFGR, 15);
			SET_BIT(RCC_CFGR, 14);
			CLEAR_BIT(RCC_CFGR, 13);
			break;
		case APB2_Pre16: 
			SET_BIT(RCC_CFGR, 15);
			SET_BIT(RCC_CFGR, 14);
			SET_BIT(RCC_CFGR, 13);
			break;
	}
}
void vRCC_EnPerClk(busName_t busName, uint8 perName){
	switch(busName){
		case AHB1:
			if(perName == 31 || perName == 24 || perName == 23 || perName == 17 || perName == 16 || perName == 15 || perName == 14 || perName == 13 || perName == 11 || perName == 10 || perName == 9) // GUARDING RESERVED BITS
				break;
			SET_BIT(RCC_AHB1ENR, perName);
			break;
		case AHB2:
			if(perName == 0 || perName == 4 || perName == 5 || perName == 6 || perName == 7) // TOO MANY RESERVED SO CHECK IF THE ENTERED PERIPHERAL ISNT RESERVED
				SET_BIT(RCC_AHB2ENR, perName);
			break;
		case AHB3:
			if(perName == 0) // GUARDING RESERVED
				SET_BIT(RCC_AHB3ENR, perName);
			break;
		case APB1:
			if(perName == 31 || perName == 30 || perName == 27 || perName == 24 || perName == 16 || perName == 13 || perName == 12 || perName == 10 || perName == 9) // GUARDING RESREVED
				break;
			SET_BIT(RCC_APB1ENR, perName);
			break;
		case APB2:
			if(perName == 0 || perName == 1 || perName == 4 || perName == 5 || perName == 8 || perName == 9 || perName == 10 || perName == 11 || perName == 12 || perName == 14 || perName == 16 || perName == 17 || perName == 18)
				SET_BIT(RCC_APB2ENR, perName);
			break;
	}
}
