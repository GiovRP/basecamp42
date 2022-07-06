#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	*dest;
	char	*ret;

	src = "Giovani";
	dest = calloc(11, sizeof(char));
	ret = ft_strcpy(dest, src);
	printf("src : %s\n", src);
	printf("dest : %s\n", dest);
	printf("ret : %s\n", ret);
}