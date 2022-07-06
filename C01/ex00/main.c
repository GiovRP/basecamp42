#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	N;

	N = 23;
	printf("N value is:	%d\n", N);
	ft_ft(&N);
	printf("the new value of N is:	%d\n", N);
}
