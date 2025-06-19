
#include<unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc != 4)
		return(write(1, "\n", 1));
	if (argv[2][0] && argv[2][1] != '\0')
		return(write(1, "\n", 1));
	if (argv[3][0] && argv[3][1] != '\0')
		return(write(1, "\n", 1));
	char *str = argv[1];
	char search = argv[2][0];
	char replace = argv[3][0];
	while(str[i] != '\0') 
	{
		if (str[i] == search )
			str[i] = replace;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}