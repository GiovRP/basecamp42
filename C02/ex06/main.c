#include <stdio.h>
#include <stdlib.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "1235\t435";
	str2 = "1231";
	str3 = "2bC4124Hi";
	str4 = "4356Cde2";
	printf("str1: %s, is_print: %d\n", str1, ft_str_is_printable(str1));
	printf("str2: %s, is_print: %d\n", str2, ft_str_is_printable(str2));
	printf("str3: %s, is_print: %d\n", str3, ft_str_is_printable(str3));
	printf("str4: %s, is_print: %d\n", str4, ft_str_is_printable(str4));
	return (0);
}