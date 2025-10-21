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


    // Probar ft_strlcat
    char dest1[20] = "Hola";
    longi = ft_strlcat(dest1, " Mundo", sizeof(dest1));
    printf("ft_strlcat(dest1, \" Mundo\", 20) -> dest = \"%s\", returned = %zu (esperado dest = \"Hola Mundo\", returned = 11), concatenación normal (sobra espacio)\n", dest1, longi);

    char dest2[10] = "Hola";
    longi = ft_strlcat(dest2, " Celti", sizeof(dest2));
    printf("ft_strlcat(dest2, \" Celti\", 10) -> dest = \"%s\", returned = %zu (esperado dest = \"Hola Celt\", returned = 10), truncamiento al límite exacto\n", dest2, longi);

    char dest3[5] = "Hola";
    longi = ft_strlcat(dest3, " Mundo", sizeof(dest3));
    printf("ft_strlcat(dest3, \" Mundo\", 5) -> dest = \"%s\", returned = %zu (esperado dest = \"Hola\", returned = 11), dstsize demasiado pequeño → no concatena\n", dest3, longi);

    char dest4[10] = "";
    longi = ft_strlcat(dest4, "42", sizeof(dest4));
    printf("ft_strlcat(dest4, \"42\", 10) -> dest = \"%s\", returned = %zu (esperado dest = \"42\", returned = 2), dest vacío\n", dest4, longi);

    char dest5[10] = "Sara";
    longi = ft_strlcat(dest5, "", sizeof(dest5));
    printf("ft_strlcat(dest5, \"\", 10) -> dest = \"%s\", returned = %zu (esperado dest = \"Sara\", returned = 4), src vacío \n", dest5, longi);


    // Probar ft_strchr
    char texto[] = "Hola Celta";
    char *ptr;

    ptr = ft_strchr(texto, 'C');
    printf("ft_strchr(texto, 'C') -> %s (esperado: 'Celta')\n", ptr);

    ptr = ft_strchr(texto, 'z');
    printf("ft_strchr(texto, 'z') -> %p (esperado: NULL)\n", (void *)ptr);

    ptr = ft_strchr(texto, '\0');
    printf("ft_strchr(texto, '\\0') -> apunta al final: '%s'\n", ptr);


    // Probar ft_strrchr
    char text[] = "banana";
    char *ptr2;

    ptr2 = ft_strrchr(text, 'a');
    printf("ft_strrchr con una letra que aparece varias veces(\"banana\", 'a') -> \"%s\" (esperado \"a\")\n", ptr2);

    ptr2 = ft_strrchr(text, 'z');
    printf("ft_strrchr con una letra que no aparece(\"banana\", 'z') -> %s (esperado NULL)\n", ptr2 == NULL ? "NULL" : ptr2);

    ptr2 = ft_strrchr(text, 'b');
    printf("ft_strrchr con la primera letra(\"banana\", 'b') -> \"%s\" (esperado \"banana\")\n", ptr2);

    ptr2 = ft_strrchr(text, '\0');
    printf("ft_strrchr con el terminador nulo(\"banana\", '\\0') -> \"%s\" (esperado \"\")\n", ptr2);


    // Probar ft_strncmp
    int r;

    r = ft_strncmp("Hola", "Holanda", 4);
    printf("ft_strncmp(\"Hola\", \"Holanda\", 4) = %d (0)\n", r);

    r = ft_strncmp("Hola", "Holanda", 7);
    printf("ft_strncmp(\"Hola\", \"Holanda\", 7) = %d (<0)\n", r);

    r = ft_strncmp("abc", "abd", 3);
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d (<0)\n", r);

    r = ft_strncmp("Hola", "Holanda", 0);
    printf("ft_strncmp(\"Hola\", \"Holanda\", 0) = %d (0)\n", r);


    //Probar strnstr
    char frase[] = "Hola mundo cruel";
    char *p;

    p = ft_strnstr(frase, "mundo", 15);
    printf("Buscar 'mundo' (len 15) en '%s' -> %s\n", frase, p ? p : "NULL");

    p = ft_strnstr(frase, "cruel", 10);
    printf("Buscar 'cruel' (len 10) en '%s' -> %s\n", frase, p ? p : "NULL");

    p = ft_strnstr(frase, "", 10);
    printf("Buscar '' (vacío) (len 10) en '%s' -> %s\n", frase, p ? p : "NULL");

    p = ft_strnstr(frase, "Hola", 2);
    printf("Buscar 'Hola' (len 2) en '%s' -> %s\n", frase, p ? p : "NULL");

    p = ft_strnstr("abcdef", "def", 6);
    printf("Buscar 'def' (len 6) en 'abcdef' -> %s\n", p ? p : "NULL");



    //Tolower y toupper
    char c1 = 'C';
    char c2 = 'e';
    char c3 = '7';

    printf("Antes tolower: '%c' -> Después: '%c'\n", c1, ft_tolower(c1));
    printf("Antes tolower: '%c' -> Después: '%c'\n", c2, ft_tolower(c2));
    printf("Antes tolower: '%c' -> Después: '%c'\n", c3, ft_tolower(c3));

    printf("Antes toupper: '%c' -> Después: '%c'\n", c1, ft_toupper(c1));
    printf("Antes toupper: '%c' -> Después: '%c'\n", c2, ft_toupper(c2));
    printf("Antes toupper: '%c' -> Después: '%c'\n", c3, ft_toupper(c3));

   //Atoiiiii

    const char *atoitest;

    atoitest = "23456789";

    printf("Antes de atoi: \"%s\" Después: %d\n", atoitest, ft_atoi(atoitest));
    
    atoitest = "-3456789";

    printf("Antes de atoi: \"%s\" Después: %d\n", atoitest, ft_atoi(atoitest));

    atoitest = "-+++++++++-------3456789";

    printf("Antes de atoi: \"%s\" Después: %d\n", atoitest, ft_atoi(atoitest));

    atoitest = "                         +-+-+3456789";

    printf("Antes de atoi: \"%s\" Después: %d\n", atoitest, ft_atoi(atoitest));

    //Memset

    char buffer[] = "Hola celta";
    char c = 'c';
    size_t n = 15;

    char *result = ft_memset(buffer, c, n);

    printf("%s", result);
    
    //Memcpy

    char src[] = "Hola celta";
    char destmemcpy[] = "CELCELCEL";
    size_t tamanio = 10;

    printf("La cadena origen es %s", src);
    printf("La cadena destino es %s", destmemcpy);

    void *resultcpy = ft_memcpy(src, destmemcpy, tamanio);

    printf("La cadena resultante es %s", result);

    return 0;
}

