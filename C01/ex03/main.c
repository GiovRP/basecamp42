#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int n1;
	int n2;
	int	div;
	int	mod;

	n1 = 13;
	n2 = 3;

	printf("The N1 and N2 is: %d, %d\n", n1, n2);
	ft_div_mod(n1, n2, &div, &mod);
	printf("The result of the div with %d and %d is: %d\n", n1, n2, div);
	printf("The result of the mod with %d and %d is: %d\n", n1, n2, mod);

}

