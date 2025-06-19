
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc != 2)
		return(write(1, "\n", 1));
	char *str = argv[1];
	while(str[i] != 0)
	{
		if (str[i] == '_')
		{
			str[i] = 127;
			if (str[i+1] != '\0')
				{
					i++;
					str[i] -= 32;
				}
			}
			write(1, &str[i], 1);
		i++;
	}
	return(write(1, "\n", 1));
}
