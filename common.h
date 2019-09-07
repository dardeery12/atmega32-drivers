/*
 * common.h
 *
 *  Created on: Jul 14, 2018
 *      Author: dardeery
 */

#ifndef COMMON_H_
#define COMMON_H_

#define SET_BIT(REG,BIT) (REG|=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )
#define NULL (void *) 0


typedef unsigned char                       uint8;
typedef signed char                         sint8;
typedef unsigned short                     uint16;
typedef signed short                       sint16;
typedef unsigned int                       uint32;
typedef signed int                         sint32;
typedef unsigned long                      uint64;
typedef signed long                        sint64;



typedef  enum
{
	E_FALSE =0,
	E_TRUE ,
}bool_t;

typedef enum
{
	IN=0,
	OUT,
}DIRECTION;

#endif /* COMMON_H_ */
