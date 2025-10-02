#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Probar ft_isalnum
    printf("ft_isalnum('7') = %d (esperado 1)\n", ft_isalnum('7'));
    printf("ft_isalnum('@') = %d (esperado 0)\n", ft_isalnum('@'));
	printf("ft_isalnum('_') = %d (esperado 0)\n", ft_isalnum('_'));
    printf("ft_isalnum('a') = %d (esperado 1)\n", ft_isalnum('a'));

    return 0;

    // Probar ft_isalpha
    printf("ft_isalpha('7') = %d (esperado 0)\n", ft_isalpha('7'));
    printf("ft_isalpha('a') = %d (esperado 1)\n", ft_isalpha('a'));
    printf("ft_isalpha('&') = %d (esperado 0)\n", ft_isalpha('&'));

    // Probar ft_isdigit
    printf("ft_isdigit('7') = %d (esperado 1)\n", ft_isdigit('7'));
    printf("ft_isdigit('a') = %d (esperado 0)\n", ft_isdigit('a'));
    printf("ft_isdigit('*') = %d (esperado 0)\n", ft_isdigit('*'));



}

