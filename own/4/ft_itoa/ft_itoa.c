
#include <stdlib.h>


char *ft_itoa(int nbr)
{
	int length = (nbr <= 0);
	int temp = nbr;
	while(temp)
	{
		length++;
		temp /= 10;
	}
	char *s = malloc(length + 1);
	if (!s)
		return NULL;
	s[length] = '\0';
	if (nbr < 0)
		s[0] ='-';
	if (!nbr)
	{
		s[0] = '0';
		return s;	
	}
	if (nbr < 0)
		temp = (nbr == -2147483648) ? 2147483647 : -nbr;
	else 
		temp = nbr;
	if (nbr == -2147483648)
	{
		s[1] ='2';
		temp = 147483648;
	}
	while(temp)
	{
		s[--length] = temp % 10 + '0';
		temp /= 10;
	}
	return s;
}

