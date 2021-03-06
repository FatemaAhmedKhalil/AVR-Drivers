/***********************************************************************************************/
/***********************************************************************************************/
/************************************* Author: Fatema Ahmed ************************************/
/***************************************** Layer: MCAL *****************************************/
/********************************* SWC: Global Interrupt Enable ********************************/
/***********************************************************************************************/
/***********************************************************************************************/

#ifndef GIE_Register
#define GIE_Register

#define SREG	*((volatile u8*) 0x5F)  // Status Register
#define SREG_I	7		// SREG Global Interrupt Enable

#endif