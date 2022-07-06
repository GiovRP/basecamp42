#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(127 > *str && *str >= 32))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
