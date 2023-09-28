#ifndef _BIT_
#define _BIT_

#include <stdlib.h>
#include <stdio.h>

int _string_length(const char *c);
unsigned int binary_to_uint(const char *bin);
int _putchar(char c);
void print_binary(unsigned long int number);
void _div(unsigned long int num);
int get_bit(unsigned long int number, unsigned int idx);
int set_bit(unsigned long int *number, unsigned int idx);
int clear_bit(unsigned long int *number, unsigned int idx);
unsigned int flip_bits(unsigned long int x, unsigned long int y);
int get_endianness(void);

#endif
