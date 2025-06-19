
#include <unistd.h>

//print is "int" mit bit 
void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;
	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}


unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;
	while(i--)
	{
		res = (res << 1) | (octet & 1); 
		octet = (octet >> 1);
	}
	return(res);
}


unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}
