#include "GPIO.h"
#include "GPIO_Private.h"

void vGPIO_PinSetMode(uint8 Port, uint8 Pin_Number, uint8 Mode){
	Pin_Number *= 2;
	switch(Port){
		case GPIOA:
			SET_BITS(GPIOA_MODER, Mode, Pin_Number);
			break;
		case GPIOB:
			SET_BITS(GPIOB_MODER, Mode, Pin_Number);
			break; 
		case GPIOC:
			SET_BITS(GPIOC_MODER, Mode, Pin_Number);
			break; 
		case GPIOD:
			SET_BITS(GPIOD_MODER, Mode, Pin_Number);
			break;
		case GPIOE:
			SET_BITS(GPIOE_MODER, Mode, Pin_Number);
			break;
		case GPIOF:
			SET_BITS(GPIOF_MODER, Mode, Pin_Number);
			break;
		case GPIOG:
			SET_BITS(GPIOG_MODER, Mode, Pin_Number);
			break;
		case GPIOH:
			SET_BITS(GPIOH_MODER, Mode, Pin_Number);
			break;
		default:
			break;
	}
		
}

void vGPIO_PinSetOutType(uint8 Port, uint8 Pin_Number, uint8 Out_Type){
	switch(Port){
		case GPIOA:
			SET_BITS(GPIOA_OTYPER, Out_Type, Pin_Number);
			break;
		case GPIOB:
			SET_BITS(GPIOB_OTYPER, Out_Type, Pin_Number);
			break; 
		case GPIOC:
			SET_BITS(GPIOC_OTYPER, Out_Type, Pin_Number);
			break; 
		case GPIOD:
			SET_BITS(GPIOD_OTYPER, Out_Type, Pin_Number);
			break;
		case GPIOE:
			SET_BITS(GPIOE_OTYPER, Out_Type, Pin_Number);
			break;
		case GPIOF:
			SET_BITS(GPIOF_OTYPER, Out_Type, Pin_Number);
			break;
		case GPIOG:
			SET_BITS(GPIOG_OTYPER, Out_Type, Pin_Number);
			break;
		case GPIOH:
			SET_BITS(GPIOH_OTYPER, Out_Type, Pin_Number);
			break;
		default:
			break;
	}
		
}

void vGPIO_PinSetOutSpeed(uint8 Port, uint8 Pin_Number, uint8 Out_Speed){
	Pin_Number *= 2;
	switch(Port){
		case GPIOA:
			SET_BITS(GPIOA_OSPEED, Out_Speed, Pin_Number);
			break;
		case GPIOB:
			SET_BITS(GPIOB_OSPEED, Out_Speed, Pin_Number);
			break; 
		case GPIOC:
			SET_BITS(GPIOC_OSPEED, Out_Speed, Pin_Number);
			break; 
		case GPIOD:
			SET_BITS(GPIOD_OSPEED, Out_Speed, Pin_Number);
			break;
		case GPIOE:
			SET_BITS(GPIOE_OSPEED, Out_Speed, Pin_Number);
			break;
		case GPIOF:
			SET_BITS(GPIOF_OSPEED, Out_Speed, Pin_Number);
			break;
		case GPIOG:
			SET_BITS(GPIOG_OSPEED, Out_Speed, Pin_Number);
			break;
		case GPIOH:
			SET_BITS(GPIOH_OSPEED, Out_Speed, Pin_Number);
			break;
		default:
			break;
	}
		
}
void vGPIO_PinPUPD(uint8 Port, uint8 Pin_Number, uint8 Pull_Type){
		Pin_Number *= 2;
	switch(Port){
		case GPIOA:
			SET_BITS(GPIOA_PUPD, Pull_Type, Pin_Number);
			break;
		case GPIOB:
			SET_BITS(GPIOB_PUPD, Pull_Type, Pin_Number);
			break; 
		case GPIOC:
			SET_BITS(GPIOC_PUPD, Pull_Type, Pin_Number);
			break; 
		case GPIOD:
			SET_BITS(GPIOD_PUPD, Pull_Type, Pin_Number);
			break;
		case GPIOE:
			SET_BITS(GPIOE_PUPD, Pull_Type, Pin_Number);
			break;
		case GPIOF:
			SET_BITS(GPIOF_PUPD, Pull_Type, Pin_Number);
			break;
		case GPIOG:
			SET_BITS(GPIOG_PUPD, Pull_Type, Pin_Number);
			break;
		case GPIOH:
			SET_BITS(GPIOH_PUPD, Pull_Type, Pin_Number);
			break;
		default:
			break;
	}
	
}

uint8 u8GPIO_PinRead(uint8 Port, uint8 Pin_Number){
	uint8 read_Value = 0;
	switch(Port){
		case GPIOA:
			read_Value = (GPIOA_IDR & (1U<<Pin_Number));
			break;
		case GPIOB:
			read_Value = (GPIOB_IDR & (1U<<Pin_Number));
			break; 
		case GPIOC:
			read_Value = (GPIOC_IDR & (1U<<Pin_Number));
			break;                                    
		case GPIOD:                                 
			read_Value = (GPIOD_IDR & (1U<<Pin_Number));
			break;                                    
		case GPIOE:                                 
			read_Value = (GPIOE_IDR & (1U<<Pin_Number));
			break;                                    
		case GPIOF:                                 
			read_Value = (GPIOF_IDR & (1U<<Pin_Number));
			break;                                    
		case GPIOG:                                 
			read_Value = (GPIOG_IDR & (1U<<Pin_Number));
			break;                                    
		case GPIOH:                                 
			read_Value = (GPIOH_IDR & (1U<<Pin_Number));
			break;
		default:
			break;
	}
	if(read_Value > 0)
		return 1;
	else
		return 0;
}

void vGPIO_PinWrite(uint8 Port, uint8 Pin_Number, uint8 value){
	if(value == 1){
		switch(Port){
			case GPIOA:
				SET_BITS(GPIOA_ODR, value, Pin_Number);
				break;
			case GPIOB:
				SET_BITS(GPIOB_ODR, value, Pin_Number);
				break; 
			case GPIOC:
				SET_BITS(GPIOC_ODR, value, Pin_Number);
				break; 
			case GPIOD:
				SET_BITS(GPIOD_ODR, value, Pin_Number);
				break;
			case GPIOE:
				SET_BITS(GPIOE_ODR, value, Pin_Number);
				break;
			case GPIOF:
				SET_BITS(GPIOF_ODR, value, Pin_Number);
				break;
			case GPIOG:
				SET_BITS(GPIOG_ODR, value, Pin_Number);
				break;
			case GPIOH:
				SET_BITS(GPIOH_ODR, value, Pin_Number);
				break;
			default:
				break;
		}
	}
	else{
		switch(Port){
			case GPIOA:
				CLEAR_BITS(GPIOA_ODR, value, Pin_Number);
				break;
			case GPIOB:
				CLEAR_BITS(GPIOB_ODR, value, Pin_Number);
				break; 
			case GPIOC:
				CLEAR_BITS(GPIOC_ODR, value, Pin_Number);
				break; 
			case GPIOD:
				CLEAR_BITS(GPIOD_ODR, value, Pin_Number);
				break;
			case GPIOE:
				CLEAR_BITS(GPIOE_ODR, value, Pin_Number);
				break;
			case GPIOF:
				CLEAR_BITS(GPIOF_ODR, value, Pin_Number);
				break;
			case GPIOG:
				CLEAR_BITS(GPIOG_ODR, value, Pin_Number);
				break;
			case GPIOH:
				CLEAR_BITS(GPIOH_ODR, value, Pin_Number);
				break;
			default:
				break;
		}
	}
		
}
void vGPIO_LockPin(uint8 Port, uint8 Pin_Number){
		uint8 Lock_KeyValue = 0;
		switch(Port){
		case GPIOA:
			SET_BIT(GPIOA_LCKR, Pin_Number);
			SET_BIT(GPIOA_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOA_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		case GPIOB:
			SET_BIT(GPIOB_LCKR, Pin_Number);
			SET_BIT(GPIOB_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOB_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		case GPIOC:
			SET_BIT(GPIOC_LCKR, Pin_Number);
			SET_BIT(GPIOC_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOC_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		case GPIOD:
			SET_BIT(GPIOD_LCKR, Pin_Number);
			SET_BIT(GPIOD_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOD_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		case GPIOE:
			SET_BIT(GPIOE_LCKR, Pin_Number);
			SET_BIT(GPIOE_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOE_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		case GPIOF:
			SET_BIT(GPIOF_LCKR, Pin_Number);
			SET_BIT(GPIOF_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOF_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		case GPIOG:
			SET_BIT(GPIOG_LCKR, Pin_Number);
			SET_BIT(GPIOG_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOG_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		case GPIOH:
			SET_BIT(GPIOH_LCKR, Pin_Number);
			SET_BIT(GPIOH_LCKR, 16); //LOCK KEY REGISTER
			Lock_KeyValue = (GPIOH_LCKR & (1U<<16));
			while(Lock_KeyValue == 0)
				continue;
			break;
		default:
			break;
	}
}
void vGPIO_SetAltFun(uint8 Port, uint8 Pin_Number, uint8 Alt_Value){
	switch(Port){
		case GPIOA:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOA_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOA_AFRL, Alt_Value, 4*Pin_Number);
			break;
		case GPIOB:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOB_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOB_AFRL, Alt_Value, 4*Pin_Number);
			break;
		case GPIOC:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOC_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOC_AFRL, Alt_Value, 4*Pin_Number);
			break;
		case GPIOD:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOD_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOD_AFRL, Alt_Value, 4*Pin_Number);
			break;
		case GPIOE:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOE_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOE_AFRL, Alt_Value, 4*Pin_Number);
			break;
		case GPIOF:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOF_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOF_AFRL, Alt_Value, 4*Pin_Number);
			break;
		case GPIOG:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOG_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOG_AFRL, Alt_Value, 4*Pin_Number);
			break;
		case GPIOH:
			if(Pin_Number > 7) // IF YOUR PIN IS HIGHER THAN 7
				SET_BITS(GPIOH_AFRH, Alt_Value, 4*(Pin_Number%8));
			else
				SET_BITS(GPIOH_AFRL, Alt_Value, 4*Pin_Number);
			break;
	}
}
