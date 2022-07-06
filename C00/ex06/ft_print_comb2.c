#include <unistd.h>

void	ft_print_comb2(void)
{
	char	counter1;
	char	counter2;
	int		c;

	write(1, "00 01", 5);
	counter1 = 0;
	counter2 = 2;
	write(1, ", ", 2);
	while (counter1 < 100 && counter2 < 100)
	{
		write(1, ", ", 2);
		c = counter1 / 10 + '0';
		write(1, &c, 2);
		c = counter1 % 10 + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		c = counter2 / 10 + '0';
		write(1, &c, 1);
		c = counter2 % 10 + '0';
		write(1, &c, 1);
		++counter2;
		if (counter2 == 100)
			counter2 = ++counter1 + 1;
	}
}
