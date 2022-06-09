unsigned char	swap_bits(unsigned char octet)
{
	octet = (octet >> 4) + (octet << 4);
	return(octet);
}



#include <stdio.h>
int main ()
{

	unsigned char truc = '.';
	printf("%x\n", truc);
	truc = swap_bits(truc);
	printf("%x", truc);

}