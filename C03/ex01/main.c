#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[] ="Giovani";
	char s2[] ="Giovan";
	printf("%d\n", ft_strncmp(s1, s2 , 3));
}