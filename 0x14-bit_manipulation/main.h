#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/**
* struct Division_t - structure for division
*
* @remainder: remainder after the div
* @quotient:result after divic
*/

struct Division_t
{
	int remainder;
	int quotient;
};

/**
 * Division - typedef for Division_t
 *
 */
typedef struct Division_t Division;

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);



#endif
