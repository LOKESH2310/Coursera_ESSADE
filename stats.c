/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief The implementation file of the c1m1 assignment
 *
 * This file includes all the required functions implementations in the c1m1 assignment
 *
 * @author Lokesh S
 * @date 22/01/2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
}

void print_statistics (unsigned char minimum, unsigned char maximum, float mean, unsigned char median){

}

void print_array (unsigned char *array, unsigned int counter){

}

unsigned char find_median (unsigned char *array, unsigned int counter){

}

float find_mean (unsigned char *array, unsigned int counter){

}

unsigned char find_maximum (unsigned char *array, unsigned int counter){

}

unsigned char find_minimum (unsigned char *array, unsigned int counter){

}

void sort_array (unsigned char *array, unsigned int counter){

}

