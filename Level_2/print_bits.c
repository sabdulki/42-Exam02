#include <stdio.h>
#include <unistd.h>
/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010" */

void	print_bits(unsigned char octet)
{
	unsigned char i = 8;
	unsigned char bits;

	while(i > 0)
	{
		bits = octet >> i & 1 + '0';
		write(1, &bits, 1);
		i--;
	}
}

void	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
