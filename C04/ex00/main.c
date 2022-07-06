#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
	char str[] = "Giovani";
	int a;
	
	a = strlen(str);
	printf("strelen : %d\n", a);
	a = ft_strlen(str);
	printf("ft_len : %d\n", a);
}