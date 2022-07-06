#include  <unistd.h>

char	*ft_strlowcase(char *str)
{
	char *lower;

	lower = str;
	while (*lower != '\0')
	{
		if (*lower >= 'A' && *lower <= 'Z')
		{
			*lower = *lower + 32;
		}
		lower++;
	}
	return (str);
}
