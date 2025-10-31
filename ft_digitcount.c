#include "libft.h"
#include <stdlib.h>

int ft_digitcount(int n){

    int contador;
    contador = 0;

    if ( n == 0)
        return(1);

    if(n < 0)
        contador ++;
    while (n != 0)
    {
        n /= 10;
        contador ++;
    }
    return(contador);
}