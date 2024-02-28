/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
*/


unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned int res = 0;

	while(i > 0)
	{
		res = res * 2 + (octet % 2); //(octet % 2) find the smallest bit in byte (and it's the last right bit)
		// it's 0 or 1
		octet = octet >> 1;
		i++; 
	}
	return (res);
}

unsigned char swap_bits(unsigned char octet)
{
	unsigned char tmp1;
	unsigned char tmp2;
	unsigned char res;

	tmp1 = octet;
	tmp2 = octet;

	tmp1 = tmp1 >> 4;
	tmp2 = tmp2 << 4;

	res = tmp1 | tmp2;
	return (res);
}

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}