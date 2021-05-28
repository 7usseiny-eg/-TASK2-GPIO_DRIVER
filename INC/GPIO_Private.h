#ifndef GPIO_PRIV_H_
#define GPIO_PRIV_H_

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIO_BASE_ADDRESSES							|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOA_BASE_ADDRESS 			0x40020000
#define 		GPIOB_BASE_ADDRESS 			0x40020400
#define 		GPIOC_BASE_ADDRESS 			0x40020800
#define 		GPIOD_BASE_ADDRESS 			0x40020C00
#define 		GPIOE_BASE_ADDRESS 			0x40021000
#define 		GPIOF_BASE_ADDRESS 			0x40021400
#define 		GPIOG_BASE_ADDRESS 			0x40021800
#define 		GPIOH_BASE_ADDRESS 			0x40021C00

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOA_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOA_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOA_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOA_OSPEED			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOA_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOA_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOA_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOA_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOA_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOA_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOA_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOB_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOB_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOB_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOB_OSPEED			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOB_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOB_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOB_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOB_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOB_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOB_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOB_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOC_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOC_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOC_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOC_OSPEED				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOC_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOC_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOC_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOC_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOC_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOC_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOC_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOD_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOD_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOD_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOD_OSPEED				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOD_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOD_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOD_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOD_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOD_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOD_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOD_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOE_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOE_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOE_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOE_OSPEED				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOE_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOE_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOE_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOE_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOE_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOE_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOE_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOF_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOF_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOF_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOF_OSPEED				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOF_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOF_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOF_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOF_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOF_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOF_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOF_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOG_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOG_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOG_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOG_OSPEED				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOG_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOG_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOG_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOG_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOG_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOG_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOG_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*********************************************
		-		-		-		-		-		-		-		-		-		-		
|																						|
|						GPIOH_REGISTERS									|
|																						|
|																						|
		-		-		-		-		-		-		-		-		-		-
*********************************************/

#define 		GPIOH_MODER				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x00)))	
#define 		GPIOH_OTYPER			(*((uint32 *)(GPIOA_BASE_ADDRESS+0x04)))	
#define 		GPIOH_OSPEED				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x08)))	
#define 		GPIOH_PUPD				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x0C)))	
#define 		GPIOH_IDR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x10)))	
#define 		GPIOH_ODR 				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x14)))	
#define 		GPIOH_BSRR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x18)))	
#define 		GPIOH_LCKR				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x1C)))	
#define 		GPIOH_AFRL				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x20)))	
#define 		GPIOH_AFRH				(*((uint32 *)(GPIOA_BASE_ADDRESS+0x24)))



#endif
