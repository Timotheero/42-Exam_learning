
#include <unistd.h>

int main (int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];
		int i = 0;
		while(str[i])
		{
			if (str[i] == 'z')
				write(1, "a",1);
			else if (str[i] == 'Z')
				write(1, "A",1);
			else if ((str[i] >= 'a' && str[i]<= 'y' )|| (str[i] >= 'A' && str[i] <= 'Z' ))
			{
					str[i] += 1;
					write(1, &str[i], 1);
			}
			else
				write(1, &str[i], 1); 
			i++;
		}
	}
	write(1, "\n", 1);	
}