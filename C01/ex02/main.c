#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 23;
	n2 = 42;
	printf("the valor of variable A is: %d\n", n1);
	printf("the valor of variable B is: %d\n", n2);
	ft_swap(&n1, &n2);
	printf("Now, the valor of variable A is: %d\n", n1);
	printf("Now, the valor of variable B is: %d\n", n2);
}
