/**
 * @file header.h
 * @brief Use of function pointer in structure
 * @author Utsav
 *
 * The file provides information about the use of function pointers in structure.
 */


#ifndef _HEADER_
#define _HEADER_

/*! ABC structure */

struct abc
{
    int (*fptr)(int, int);   /**<  function pointer for add function */  
    void (*ptr)(void);       /**<  function pointer for print function */  
    float (*ptr1)(float,float); /**<  function pointer for divi function */  
    int (*ptr2)(int, int); /**<  function pointer for sub function */ 
};

/** 
 * @brief add two numbers
 *
 * This function add two numbers and give final summation 
 *
 * @param[in] a is a first number 
 * @param[in] b is a second number
 *
 * @return summation of two numbers
 */ 

int add(int a, int b);

/** 
 * @brief print HELLO
 *
 * This function print HELLO on terminal
 */

void print(void);

/** 
 * @brief devide two numbers
 *
 * This function divide two numbers and give final result 
 *
 * @param[in] a is a first number 
 * @param[in] b is a second number
 *
 * @return  division of two numbers
 */ 

float divi(float a, float b);

/** 
 * @brief substract two numbers
 *
 * This function substract two numbers and give final result 
 *
 * @param[in] a is a first number 
 * @param[in] b is a second number
 *
 * @return  substraction of two numbers
 */ 

int sub(int a, int b);


#endif
