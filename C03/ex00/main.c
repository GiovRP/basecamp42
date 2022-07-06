#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] ="Giovani";
	char s2[] = "Giovani";
	printf("%d\n", ft_strcmp(s1, s2));
}
