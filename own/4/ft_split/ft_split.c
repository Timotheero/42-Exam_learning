

#include <stdlib.h>

char    **ft_split(char *str)
{
	int i = 0;
	int j;
	int k = 0;
	char **split = malloc(sizeof(char*)*10000);
	if (!split)
		return NULL;
	while(str[i] == ' ' || str[i] == '\t' ||str[i] == '\n' )
		i++;
	while(str[i])
	{
		j = 0;
		if (!(split[k] =  malloc(4096)))
			return NULL;
		while(str[i] && str[i] != ' ' &&  str[i] != '\t' && str[i] != '\n' )
			split[k][j++] = str[i++];
		split[k++][j] = '\0';
		while(str[i] == ' ' || str[i] == '\t' ||str[i] == '\n' )
			i++;
		}
		split[k] = NULL;
		return(split);
}