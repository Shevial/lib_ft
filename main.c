#include <stdio.h>
#include "libft.h"

int main(void)
{
    char dest[10];

    size_t longi;

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

    //Probar ft_strlcpy
    longi = ft_strlcpy(dest, "42", sizeof(dest));
    printf("ft_strlcpy(dest, \"42\") -> dest = \"%s\", returned = %zu (esperado dest = \"42\", returned = 2)\n", dest, longi);

    longi = ft_strlcpy(dest, "HolaCeltii", sizeof(dest));
    printf("ft_strlcpy(dest, \"HolaCeltii\") -> dest = \"%s\", returned = %zu (esperado dest = \"HolaCelti\", returned = 10)\n", dest, longi);

    longi = ft_strlcpy(dest, "Sara", 0);
    printf("ft_strlcpy(dest, \"Sara\", 0) -> dest = \"%s\", returned = %zu (esperado dest = \"\", returned = 4)\n", dest, longi);

    longi = ft_strlcpy(dest, "", sizeof(dest));
    printf("ft_strlcpy(dest, \"\") -> dest = \"%s\", returned = %zu (esperado dest = \"\", returned = 0)\n", dest, longi);


    return 0;

}

