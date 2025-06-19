
#include<stdlib.h>
#include <stdio.h>

int main( int ac, char **av)
{
	if (ac == 2)
	{
		int num = atoi(av[1]);
		int i = 2;
		if (num == 1)
			return(printf("1\n"));
		while(num > 1)
		{
			if (num % i == 0)
			{
				printf("%i", i);
				num /= i;
				if ( num > 1)
					printf("*");
			}
			else
				i++;
		}

	}

	printf("\n");
}
