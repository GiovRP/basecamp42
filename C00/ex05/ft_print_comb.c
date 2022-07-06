#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[3];
	char	space[2];

	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '2';
	space[0] = ',';
	space[1] = ' ';
	write(1, &comb, 3);
	comb[2]++;
	while (comb[0] <= '7')
	{
		while (comb[1] <= '8')
		{
			while (comb[2] <= '9')
			{
				write(1, &space, 2);
				write(1, &comb, 3);
				comb[2]++;
			}
			comb[2] = ++comb[1] + 1;
		}
		comb[1] = ++comb[0];
		comb[2] = ++comb[1] + 1;
	}
}
