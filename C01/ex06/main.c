#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char *str;
	int i;
	
	str = "Giovani";
	i = ft_strlen(str);
	printf("str:'%s' len: %d \n", str , i);
	return(0);
}