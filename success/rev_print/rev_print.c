
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return(write(1, "\n", 1));
	int len = 0;
	char *str = argv[1];
	while(str[len] != 0)
		len++;
	len--;
	while(len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
	return(0);
}