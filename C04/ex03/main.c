#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ft_atoi(char *str);
int main () {
   int val;
   char str[20];
   
 	 strcpy(str, "    +-+-2003");	
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   return(0);
}
