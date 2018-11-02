/******************************************************************************
 * Copyright (C) 2018 by Hussain Aftab
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
 * @brief assesment week 1
 *
 * <Add Extended Description Here>
 *
 * @author Hussain Afatb
 * @date 30-10-2018
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */


  print_statistics(test, SIZE);
	
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char array[], int n)
{

  // write code to print array statistics
  sort_array(array, n);
  print_array(array, n);
  printf("Meadian Value = %d\n", find_median(array, n));
  printf("Mean value  = %.3f\n", find_mean(array, n));
  printf("Maximum value  = %d\n", find_maximum(array, n));
  printf("Minimum value  = %d\n", find_minimum(array, n));


}


void print_array (unsigned char array[], int n)
{

	// write code to print array
	printf("Sorted Array\n");
	for(int i = 0; i < n; i++)
		printf("%d, ",array[i]);

}


unsigned char find_median (unsigned char array[], int n)
{
unsigned int i = 0;
unsigned char median;
// write code to calculate medain of array
	//sort_array(array, n);
	median = (n + 1) / 2;
	//printf("\nmedian Number  = %d\n", median);
return array[median];

}

float find_mean (unsigned char array[], int n)
{

// write code to calculate mean of array
unsigned int i = 0;
unsigned int sum = 0;
float mean = 0.0;

	for(i = 0; i < n; i++)
	{
		sum += array[i];
	}
//	printf("sum = %d\n", sum);
	mean = ((float)sum / (float)n);

return (mean);

}

unsigned char find_maximum (unsigned char array[], int n)
{

// write code to calculate maximum of array
unsigned int i = 0;
unsigned char max;
	max = array[0];
	for(i = 1; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];

	}

return max;

}


unsigned char find_minimum (unsigned char array[], int n)
{

// write code to calculate minimum of array
unsigned int i = 0;
unsigned char min;
	min = array[0];
	for(i = 1; i < n; i++)
	{
		if (array[i] < min)
			min = array[i];

	}

return min;

}


void sort_array (unsigned char array[], int n)
{
	unsigned int i = 0, j = 0;
	unsigned char temp;
	//printf("Original Array\n");
	//for(i = 0; i < n; i++)
	//	printf("%d, ",array[i]);

	// write code to sort the array
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if(array[j] > array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

}


