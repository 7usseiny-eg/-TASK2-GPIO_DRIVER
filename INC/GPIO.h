#ifndef GPIO_H_
#define GPIO_H_
#include "STD_TYPES.h"
/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|								USER_MACROS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 			GPIOA					0
#define 			GPIOB					1
#define 			GPIOC					2
#define 			GPIOD					3
#define 			GPIOE					4
#define 			GPIOF					5
#define 			GPIOG					6
#define 			GPIOH					7


#define 			PIN0					0
#define 			PIN1					1
#define 			PIN2					2
#define 			PIN3					3
#define 			PIN4					4
#define 			PIN5					5
#define 			PIN6					6
#define 			PIN7					7
#define 			PIN8					8
#define 			PIN9					9
#define 			PIN10					10
#define 			PIN11					11
#define 			PIN12					12
#define 			PIN13					13
#define 			PIN14					14
#define 			PIN15					15
#define 			PIN16					16
//MODES FOR PORT MODE REGISTER
#define OUTPUT_MODE 1
#define INPUT_MODE 0
#define ALTERNATE_MODE 2
#define ANALOG_MODE 3
//SPEEDS FOR OUTPUT SPEED REGISTER
#define LOW_SPEED 0
#define MEDIUM_SPEED 1
#define HIGH_SPEED 2
#define VERY_HIGH_SPEED 3
//OUTPUT MODE FOR OUTPUT TYPE REGISTER
#define OUTPUT_PUSH_PULL 0
#define OUTPUT_OPEN_DRAIN 1
/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						FUNCTION_PROTOTYPES							|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/
void vGPIO_PinSetMode(uint8 Port, uint8 Pin_Number, uint8 Mode);
void vGPIO_PinSetOutType(uint8 Port, uint8 Pin_Number, uint8 Out_Type);
void vGPIO_PinSetOutSpeed(uint8 Port, uint8 Pin_Number, uint8 Out_Speed);
void vGPIO_PinPUPD(uint8 Port, uint8 Pin_Number, uint8 Pull_Type);
uint8 u8GPIO_PinRead(uint8 Port, uint8 Pin_Number);
void vGPIO_PinWrite(uint8 Port, uint8 Pin_Number, uint8 value);
void vGPIO_LockPin(uint8 Port, uint8 Pin_Number);
void vGPIO_SetAltFun(uint8 Port, uint8 Pin_Number, uint8 Alt_Value);

#endif
