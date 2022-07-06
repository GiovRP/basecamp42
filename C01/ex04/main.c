#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 13;
	n2 = 3;
	printf("The valor of the numbers is: %d and %d\n", n1, n2);
	ft_ultimate_div_mod(&n1, &n2);
	printf("The result of div is: %d\n", n1);
	printf("The result of mod is: %d\n", n2);
}