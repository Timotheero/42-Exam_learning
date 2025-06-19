
// #include <stdio.h>

int	ft_atoi(const char *str)
{
	char *negint = "-2147483648";
	
	int i = 0;
	int len = 0;
	while(str[i] == negint[i])
	{
		i++;
		if (str[i] == '\0')
			return(-2147483648);
	}
	i = 0;
	int negative = 1;
	int number = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while(str[len ])
		len++;
	while(str[i])
	{
		if ((str[i] <= '0' || str[i] >= '9'))
			return(number * negative);
		number = number *10 + (str[i] - '0');
		i++;
	}
	return(number * negative);
}


// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("\nstring: %s\n", av[1]);
// 	printf("\n%i\n", ft_atoi(av[1]));
// }