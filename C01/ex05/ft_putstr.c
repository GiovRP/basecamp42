#include <unistd.h>

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	write(1, str, count);
}
