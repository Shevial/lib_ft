#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Probar ft_isalnum
    printf("ft_isalnum('7') = %d (esperado 1)\n", ft_isalnum('7'));
    printf("ft_isalnum('@') = %d (esperado 0)\n", ft_isalnum('@'));
	printf("ft_isalnum('_') = %d (esperado 0)\n", ft_isalnum('_'));
    printf("ft_isalnum('a') = %d (esperado 1)\n", ft_isalnum('a'));

    // Probar ft_isalpha
    printf("ft_isalpha('7') = %d (esperado 0)\n", ft_isalpha('7'));
    printf("ft_isalpha('a') = %d (esperado 1)\n", ft_isalpha('a'));
    printf("ft_isalpha('&') = %d (esperado 0)\n", ft_isalpha('&'));

    // Probar ft_isdigit
    printf("ft_isdigit('7') = %d (esperado 1)\n", ft_isdigit('7'));
    printf("ft_isdigit('a') = %d (esperado 0)\n", ft_isdigit('a'));
    printf("ft_isdigit('*') = %d (esperado 0)\n", ft_isdigit('*'));
   
    // Probar ft_isascii
    printf("ft_isascii('7') = %d (esperado 1)\n", ft_isascii('7'));
    printf("ft_isascii('a') = %d (esperado 1)\n", ft_isascii('a'));
    printf("ft_isascii(200) = %d (esperado 0)\n", ft_isascii(200));

    // Probar ft_isprint
    printf("ft_isprint('7') = %d (esperado 1)\n", ft_isprint('7'));
    printf("ft_isprint('\\n') = %d (esperado 0)\n", ft_isprint('\n'));

    //Probar ft_strlen
    printf("ft_strlen(\"Celta\") = %zu (esperado 5)\n", ft_strlen("Celta"));
    printf("ft_strlen(\"42\") = %zu (esperado 2)\n", ft_strlen("42"));
    printf("ft_strlen("") = %zu (esperado 0)\n", ft_strlen(""));


    return 0;

}

