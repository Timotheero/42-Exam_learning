// #include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return(0);
	while(n > 1)
	{
		if (n > 1 && (n % 2 > 0))
			return(0);
		n =  n / 2;
	}
	return(1);
}

// int main()
// {
// 	printf("\n%i\n", is_power_of_2(-2147483649));
// 	return(0);
// }