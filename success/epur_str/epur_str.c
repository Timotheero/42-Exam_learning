
#include <unistd.h>

// int main (int ag, char ** av)
// {
// 	if (ag == 2)
// 	{
// 		char *str = av[1];
// 		int i = 0;
// 		int len = 0;
// 		int wordfound = 0;
// 		while(str[len])
// 			len++;
// 		while(i <= len)
// 		{
// 			if(str[i] != 32 && str[i] != 0 && str[i] != 9 && str[i] != 10 )
// 				{
// 					write(1, &str[i], 1);
// 					i++;
// 					wordfound = 1;
// 				}
// 			// if (((i != len )&& (i != len-1 ) &&  && ( str[i] == 32 || str[i] == 0 || str[i] == 9 || str[i] == 10 )))
// 			if ((i != len )&& (i != len-1 ) && wordfound == 1 && ( str[i] == 32 || str[i] == 0 || str[i] == 9 || str[i] == 10 ))
// 			{
// 				wordfound = 0;
// 				write(1, " ", 1);
// 			}	
// 			while(str[i] == 32 || str[i] == 0 || str[i] == 9 || str[i] == 10 )
// 			{
// 				wordfound = 0;
// 				i++;
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return(0);
// }


int main (int ag, char ** av)
{
	if (ag == 2)
	{
		char *str = av[1];
		int i = 0;
		int len = 0;
		int wordfound_start = 0;
		int wordfound_end = 0;
		int isfirst = 1;
		while(str[len])
			len++;
		while(i <len)
		{
			while(str[i] == 32 || str[i] == 0 || str[i] == 9 || str[i] == 10 )
				i++;
			wordfound_start = i;
			if (!isfirst)
				write(1, " ", 1);
			isfirst = 0;
			while(str[i] != 32 && str[i] != 0 && str[i] != 9 && str[i] != 10 )
				i++;
			wordfound_end = i;
			while(wordfound_start < wordfound_end)
				{
					write(1, &str[wordfound_start], 1);
					wordfound_start++;
				}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}