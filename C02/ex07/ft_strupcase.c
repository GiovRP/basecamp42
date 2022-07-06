#include  <unistd.h>

char	*ft_strupcase(char *str)
{
	char *upper;

	upper = str;
	if(*upper != 0)
	{
		while (*upper != '\0')
		{
			if (*upper >= 'a' && *upper <= 'z')
			{
				*upper = *upper - 32;
			}
			upper++;
		}
	}
	return (str);
}