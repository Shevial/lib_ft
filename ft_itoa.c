#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n){

int numbercpy;
int i;
char *str;

if(n == -2147483648)
    return(ft_strdup("-2147483648"));
numbercpy = n;
if (n < 0)
    numbercpy = -n;
i = ft_digitcount(n);
str = malloc(sizeof(char) * (i + 1));
if(!str)
    return(NULL);
str[i] = '\0';
i--;
if(numbercpy == 0)
    str[i] = '0';
while (numbercpy > 0)
{
    str[i--] = (numbercpy % 10) + '0';
    numbercpy /= 10;
}
if(n < 0)
    str[0] = '-';
return(str);
}