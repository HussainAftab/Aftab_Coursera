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
 * @file stats.h 
 * @brief week 1 assesment header file
 *
 * <Add Extended Description Here>
 *
 * @author Hussain Aftab
 * @date 10-30-2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief <Print statistic of the array>
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param "array" char array whose statistics are printed
 *
 * @return None
 */
void print_statistics(char array[]);


/**
 * @brief <Print values of the array>
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param "array" char array whose values are to be printed
 *
 * @return None
 */
void print_array (char array[]);


/**
 * @brief input array whose median is to be calculated
 *
 * Given an array of data and a length, returns the median value
 *
 * @param "array" char array whose values meadian value to be determined
 *
 * @return Median value
 */
char find_median (char array[]);


/**
 * @brief input array whose mean is to be calculated
 *
 * Given an array of data and a length, returns the mean
 *
 * @param "array" char array whose values mean value to be determined
 *
 * @return mean value
 */
char find_mean (char array[]);


/**
 * @brief input array whose maximum is to be calculated
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param "array" char array whose values maximum value to be determined
 *
 * @return maximum value
 */
char find_maximum (char array[]);


/**
 * @brief input array whose minimum is to be calculated
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param "array" char array whose values minimum value to be determined
 *
 * @return minimum value
 */
char find_minimum (char array[]);


/**
 * @brief input array which is to be sorted
 *
 * Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param "array" char array which is to be sorted
 *
 * @return minimum value
 */
void sort_array (char array[]);



/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
