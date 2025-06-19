
#include <unistd.h>

// int ft_putnbr(int num)
// {
// 	char c;
// 	if (num >= 10)
// 		ft_putnbr(num / 10);
// 	c = num % 10 + '0';
// 	write(1, &c, 1);
// 	return(0);
// }


// void ft_putnbr(int num)
// {
//     char c;

//     if (num >= 10)
//         ft_putnbr(num / 10);
//     c = num % 10 + '0';
//     write(1, &c, 1);
// }

void ft_putnbr(int num)
{
	char c;
	if (num >= 10)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write (1, &c, 1);
}