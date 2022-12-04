#include <iostream>
#include "boolBitaBit.h"


bool is_true(unsigned char x, int y)
{
	unsigned char masc = 1 << y;
	if (masc & x) {
		return true;
	}
	else {
		return false;
	}
}

void turn_on(unsigned char* x, int y)
{
	unsigned char mask = 1 << y;
	*x = *x | mask;
}

void turn_off(unsigned char* x, int y)
{
	unsigned char mask = ~(1 << y);
	*x = *x & mask;
}