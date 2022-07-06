#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!('z' >= *str && *str >= 'a'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}