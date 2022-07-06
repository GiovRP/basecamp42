#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main (void)
{
	char str[] = "Giovani";
	char dest[] = "Hello, ";
	char *ret;
	
	ret = strcat(dest, str);
	printf("dest: %s\n", dest);
	printf("rest: %s\n", ret);
}