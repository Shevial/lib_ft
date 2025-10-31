#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 


void	ft_printchariteri(unsigned int i, char *c)
{
	printf("%u: %c\n", i, *c);
}
char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char		dest[10];
	size_t		longi;
	char		dest1[20] = "Hola";
	char		dest2[10] = "Hola";
	char		dest3[5] = "Hola";
	char		dest4[10] = "";
	char		dest5[10] = "Sara";
	char		texto[] = "Hola Celta";
	char		*ptr;
	char		text[] = "banana";
	char		*ptr2;
	int			r;
	char		frase[] = "Hola mundo cruel";
	char		*p;
	char		c1;
	char		c2;
	char		c3;
	const char	*atoitest;
	char		buffer[] = "Hola celta";
	char		c;
	size_t		n;
	char		*result;
	char		src[] = "Hola celta";
	char		destmemcpy[] = "CELCELCEL";
	size_t		tamanio;
	char		*resultcpy;
	char		src2[] = "Hola celta";
	char		destmemcpy2[] = "CELCELCEL";
	size_t		tamanio2;
	char		*resultcpy2;

	printf("\n========== PRUEBAS LIBFT ==========\n\n");

	// ISALNUM
	printf("ft_isalnum:\n");
	printf("ft_isalnum('7') = %d (esperado 1)\n", ft_isalnum('7'));
	printf("ft_isalnum('@') = %d (esperado 0)\n", ft_isalnum('@'));
	printf("ft_isalnum('_') = %d (esperado 0)\n", ft_isalnum('_'));
	printf("ft_isalnum('a') = %d (esperado 1)\n\n", ft_isalnum('a'));

	// ISALPHA
	printf("ft_isalpha:\n");
	printf("ft_isalpha('7') = %d (esperado 0)\n", ft_isalpha('7'));
	printf("ft_isalpha('a') = %d (esperado 1)\n", ft_isalpha('a'));
	printf("ft_isalpha('&') = %d (esperado 0)\n\n", ft_isalpha('&'));

	// ISDIGIT
	printf("ft_isdigit:\n");
	printf("ft_isdigit('7') = %d (esperado 1)\n", ft_isdigit('7'));
	printf("ft_isdigit('a') = %d (esperado 0)\n", ft_isdigit('a'));
	printf("ft_isdigit('*') = %d (esperado 0)\n\n", ft_isdigit('*'));

	// ISASCII
	printf("ft_isascii:\n");
	printf("ft_isascii('7') = %d (esperado 1)\n", ft_isascii('7'));
	printf("ft_isascii('a') = %d (esperado 1)\n", ft_isascii('a'));
	printf("ft_isascii(200) = %d (esperado 0)\n\n", ft_isascii(200));

	// ISPRINT
	printf("ft_isprint:\n");
	printf("ft_isprint('7') = %d (esperado 1)\n", ft_isprint('7'));
	printf("ft_isprint('\\n') = %d (esperado 0)\n\n", ft_isprint('\n'));

	// STRLEN
	printf("ft_strlen:\n");
	printf("ft_strlen(\"Celta\") = %zu (esperado 5)\n", ft_strlen("Celta"));
	printf("ft_strlen(\"42\") = %zu (esperado 2)\n", ft_strlen("42"));
	printf("ft_strlen(\"\") = %zu (esperado 0)\n\n", ft_strlen(""));

	// STRLCPY
	printf("ft_strlcpy:\n");
	longi = ft_strlcpy(dest, "42", sizeof(dest));
	printf("dest = \"%s\", returned = %zu (esperado dest=\"42\", ret=2)\n", dest, longi);
	longi = ft_strlcpy(dest, "HolaCeltii", sizeof(dest));
	printf("dest = \"%s\", returned = %zu (esperado dest=\"HolaCelti\", ret=10)\n", dest, longi);
	longi = ft_strlcpy(dest, "Sara", 0);
	printf("dest = \"%s\", returned = %zu (esperado dest=\"\", ret=4)\n", dest, longi);
	longi = ft_strlcpy(dest, "", sizeof(dest));
	printf("dest = \"%s\", returned = %zu (esperado dest=\"\", ret=0)\n\n", dest, longi);

	// STRLCAT
	printf("ft_strlcat:\n");
	longi = ft_strlcat(dest1, " Mundo", sizeof(dest1));
	printf("dest1 = \"%s\", returned = %zu (esperado ret=11)\n", dest1, longi);
	longi = ft_strlcat(dest2, " Celti", sizeof(dest2));
	printf("dest2 = \"%s\", returned = %zu (esperado ret=10)\n", dest2, longi);
	longi = ft_strlcat(dest3, " Mundo", sizeof(dest3));
	printf("dest3 = \"%s\", returned = %zu (esperado ret=11)\n", dest3, longi);
	longi = ft_strlcat(dest4, "42", sizeof(dest4));
	printf("dest4 = \"%s\", returned = %zu (esperado ret=2)\n", dest4, longi);
	longi = ft_strlcat(dest5, "", sizeof(dest5));
	printf("dest5 = \"%s\", returned = %zu (esperado ret=4)\n\n", dest5, longi);

	// STRCHR
	printf("ft_strchr:\n");
	ptr = ft_strchr(texto, 'C');
	printf("Buscando 'C' -> %s\n", ptr);
	ptr = ft_strchr(texto, 'z');
	printf("Buscando 'z' -> %p (NULL esperado)\n", (void *)ptr);
	ptr = ft_strchr(texto, '\0');
	printf("Buscando terminador -> apunta a: '%s'\n\n", ptr);

	// STRRCHR
	printf("ft_strrchr:\n");
	ptr2 = ft_strrchr(text, 'a');
	printf("Última 'a' -> %s\n", ptr2);
	ptr2 = ft_strrchr(text, 'z');
	printf("Letra no existente -> %s\n", ptr2 == NULL ? "NULL" : ptr2);
	ptr2 = ft_strrchr(text, 'b');
	printf("Primera letra -> %s\n", ptr2);
	ptr2 = ft_strrchr(text, '\0');
	printf("Terminador -> %s\n\n", ptr2);

	// STRNCMP
	printf("ft_strncmp:\n");
	r = ft_strncmp("Hola", "Holanda", 4);
	printf("Comparando hasta 4 -> %d (0)\n", r);
	r = ft_strncmp("Hola", "Holanda", 7);
	printf("Comparando hasta 7 -> %d (<0)\n", r);
	r = ft_strncmp("abc", "abd", 3);
	printf("Comparando hasta 3 -> %d (<0)\n", r);
	r = ft_strncmp("Hola", "Holanda", 0);
	printf("Comparando hasta 0 -> %d (0)\n\n", r);

	// STRNSTR
	printf("ft_strnstr:\n");
	p = ft_strnstr(frase, "mundo", 15);
	printf("Buscar 'mundo' -> %s\n", p ? p : "NULL");
	p = ft_strnstr(frase, "cruel", 10);
	printf("Buscar 'cruel' -> %s\n", p ? p : "NULL");
	p = ft_strnstr(frase, "", 10);
	printf("Buscar '' (vacío) -> %s\n", p ? p : "NULL");
	p = ft_strnstr(frase, "Hola", 2);
	printf("Buscar 'Hola' (len2) -> %s\n", p ? p : "NULL");
	p = ft_strnstr("abcdef", "def", 6);
	printf("Buscar 'def' -> %s\n\n", p ? p : "NULL");

	// TOLOWER / TOUPPER
	printf("tolower / toupper:\n");
	c1 = 'C'; c2 = 'e'; c3 = '7';
	printf("tolower: '%c'->'%c', '%c'->'%c', '%c'->'%c'\n",
		c1, ft_tolower(c1), c2, ft_tolower(c2), c3, ft_tolower(c3));
	printf("toupper: '%c'->'%c', '%c'->'%c', '%c'->'%c'\n\n",
		c1, ft_toupper(c1), c2, ft_toupper(c2), c3, ft_toupper(c3));

	// ATOI
	printf("ft_atoi:\n");
	atoitest = "23456789";
	printf("\"%s\" -> %d\n", atoitest, ft_atoi(atoitest));
	atoitest = "-3456789";
	printf("\"%s\" -> %d\n", atoitest, ft_atoi(atoitest));
	atoitest = "-+++++++++-------3456789";
	printf("\"%s\" -> %d\n", atoitest, ft_atoi(atoitest));
	atoitest = "         +-+-+3456789";
	printf("\"%s\" -> %d\n\n", atoitest, ft_atoi(atoitest));

	// MEMSET
	printf("ft_memset:\n");
	c = 'c';
	n = 15;
	result = ft_memset(buffer, c, n);
	printf("%s\n\n", result);

	// MEMCPY
	printf("ft_memcpy:\n");
	tamanio = 15;
	printf("Origen: %s\nDestino: %s\n", src, destmemcpy);
	resultcpy = ft_memcpy(destmemcpy, src, tamanio);
	printf("Resultado: %s\n\n", resultcpy);
	tamanio2 = 4;
	printf("Origen: %s\nDestino: %s\n", src2, destmemcpy2);
	resultcpy2 = ft_memcpy(destmemcpy2, src2, tamanio2);
	printf("Resultado: %s\n\n", resultcpy2);

	// MEMMOVE
	printf("ft_memmove:\n");
	char	str1[] = "HolaMundo";
	char	str2[] = "HolaMundo";
	char	str3[] = "1234567890";
	char	deest1[20] = "ABCDEFGHIJ";
	//char	deest2[20] = "ABCDEFGHIJ";

	printf("Caso 1: sin solapamiento\nAntes: %s\n", deest1);
	ft_memmove(deest1, str1, 5);
	printf("Después: %s\n\n", deest1);

	printf("Caso 2: solapamiento hacia adelante\nAntes: %s\n", str1);
	ft_memmove(str1 + 3, str1 + 5, 5);
	printf("Después: %s\n\n", str1);

	printf("Caso 3: solapamiento hacia atrás\nAntes: %s\n", str2);
	ft_memmove(str2 + 5, str2 + 3, 5);
	printf("Después: %s\n\n", str2);

	printf("Caso 4: destino = origen\nAntes: %s\n", str3);
	ft_memmove(str3, str3, 10);
	printf("Después: %s\n\n", str3);

	// MEMCHR
	printf("ft_memchr:\n");
	char	mem1[] = "HolaCelta";
	char	mem2[] = "HolaCelti";
	char	*ptrmem;
	int		resultmemcmp;

	ptrmem = ft_memchr(mem1, 'C', 9);
	printf("ft_memchr -> 'C' en \"%s\": %s\n", mem1, ptrmem);
	ptrmem = ft_memchr(mem1, 'z', 9);
	printf("ft_memchr -> 'z' en \"%s\": %p (NULL esperado)\n\n", mem1, (void *)ptrmem);

	//MEMCMP

	printf("ft_memcmp:\n");
	resultmemcmp = ft_memcmp(mem1, mem2, 9);
	printf("ft_memcmp(\"%s\", \"%s\", 9) = %d (esperado negativo)\n", mem1, mem2, resultmemcmp);
	resultmemcmp = ft_memcmp(mem1, "HolaCelta", 9);
	printf("ft_memcmp(\"%s\", \"HolaCelta\", 9) = %d (esperado 0)\n", mem1, resultmemcmp);
	resultmemcmp = ft_memcmp(mem1, "HolaCelta!", 10);
	printf("ft_memcmp(\"%s\", \"HolaCelta!\", 10) = %d (esperado negativo)\n\n", mem1, resultmemcmp);


	//BZERO
	printf("ft_bzero:\n");
	char buf[10] = "HolaCelta";
    printf("Antes de ft_bzero: \"%s\"\n", buf);
    ft_bzero(buf, 5);
    printf("Después de ft_bzero: ");
    for (int i = 0; i < 10; i++)
    printf("%02X ", (unsigned char)buf[i]);
    printf("\n");
	printf("\n");
	
//STRDUP
	char	*original = "Hola Celta";
	char	*copia;

	printf("ft_strdup:\n");
	printf("Original: %s\n", original);
	copia = ft_strdup(original);
	if (!copia)
	{
		printf("Error: malloc falló\n");
		return (1);
	}
	printf("Duplicado: %s\n", copia);
	
	copia[0] = 'Z';
	printf("Después de modificar copia:\n");
	printf("Original: %s\n", original);
	printf("Copia: %s\n", copia);
	printf("\n");

	free(copia);


	int	*arr;
	size_t	i;

	printf("=== Test ft_calloc ===\n");
	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Error: malloc falló\n");
		return (1);
	}

	printf("Contenido inicial (debe ser todo 0): ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	free(arr);
	printf("\n");


	char const	*textosub = "HolaCelta";
	char		*sub;
	printf("=== Test ft_substr ===\n");

	printf("Cadena original: \"%s\"\n", textosub);

	sub = ft_substr(textosub, 0, 4);
	printf("Substring desde 0, len 4 -> \"%s\"\n", sub);
	free(sub);

	sub = ft_substr(textosub, 2, 4);
	printf("Substring desde 2, len 4 -> \"%s\"\n", sub);
	free(sub);

	sub = ft_substr(textosub, 5, 20);
	printf("Substring desde 5, len 20 -> \"%s\"\n", sub);
	free(sub);

	sub = ft_substr(textosub, 20, 5);
	printf("Substring desde 20 (fuera del rango) -> \"%s\"\n", sub);
	free(sub);
	printf("\n");


	printf("=== ft_strjoin ===\n");
	char	*s1join = "Hola ";
	char	*s2join = "Celta";
	char	*resultado;

	printf("s1 = \"%s\"\n", s1join);
	printf("s2 = \"%s\"\n", s2join);

	resultado = ft_strjoin(s1join, s2join);
	if (resultado)
	{
		printf("Resultado: \"%s\"\n", resultado);
		free(resultado);
	}
	else
		printf("Error: malloc falló.\n");
	printf("\n");

	printf("=== ft_strtrim===\n");
	const char *stringtrim = "aaaaa ' ' -hola celta-aaa 'a'";
	const char *trimer = "a '\t";

	char *trimeado = ft_strtrim(stringtrim, trimer);

	printf("La cadena original es: %s\n", stringtrim);
	printf("Lo que va a eliminar es: %s\n", trimer);
	printf("La cadena recortada es: %s\n", trimeado);

	printf("\n");

	printf("=== ft_putchar_fd ===\n");
    printf("Imprimiendo caracteres: ");
	fflush(stdout); 
    ft_putchar_fd('H', 1);
    ft_putchar_fd('o', 1);
    ft_putchar_fd('l', 1);
    ft_putchar_fd('a', 1);
    ft_putchar_fd('\n', 1);
    printf("\n");


    printf("=== ft_putstr_fd ===\n");
    char *strputstr = "Hola Celta";
    printf("Cadena original: %s\n", strputstr);
    printf("Salida con ft_putstr_fd: ");
	fflush(stdout); 
    ft_putstr_fd(strputstr, 1);
    ft_putchar_fd('\n', 1);
    printf("\n");

    printf("=== ft_putend_fd ===\n");
    char *strputend = "Hola Mundo con ft_putend_fd";
    printf("Salida con ft_putend_fd: ");
	fflush(stdout);
    ft_putend_fd(strputend, 1);
    printf("\n");

    printf("=== ft_putnbr_fd ===\n");
    int numputnbr = 12345;
    int numputnbr2 = -9876;
    printf("Número %d con ft_putnbr_fd: ", numputnbr);
	fflush(stdout);
    ft_putnbr_fd(numputnbr, 1);
    ft_putchar_fd('\n', 1);
    printf("Número %d con ft_putnbr_fd: ", numputnbr2);
	fflush(stdout);
    ft_putnbr_fd(numputnbr2, 1);
    ft_putchar_fd('\n', 1);
    printf("\n");


	printf("=== ft_itoa===\n");
	
	printf(" Con el numero más pequeño\n");
	int numitoa = -2147483648;
    char *stritoa = ft_itoa(numitoa);

    if (stritoa == NULL)
    printf("Error al convertir el número %ld a cadena.\n",(n));

    printf("%s\n", stritoa);

	printf(" Con un numero random\n");
	int numitoa2 = 24645;
    char *stritoa2 = ft_itoa(numitoa2);

    if (stritoa2 == NULL)
    printf("Error al convertir el número %ld a cadena.\n",(n));

    printf("%s\n", stritoa2);
    free(stritoa2);
	
	printf("\n");


	char textoiteri[] = "hola celta";

    printf("=== ft_striteri ===\n");
    printf("Cadena original: %s\n", textoiteri);

    ft_striteri(textoiteri, ft_printchariteri);

    printf("Cadena después de ft_striteri: %s\n\n", textoiteri);


	printf("=== ft_strmapi ===\n");

	const char	*originmapi = "hola celta";
	char		*resulmapi;

	printf("Cadena original: %s\n", originmapi);

	resulmapi = ft_strmapi(originmapi, to_upper_even);

	if (resulmapi)
	{
		printf("Resultado: %s\n", resulmapi);
		free(resulmapi);
	}
	else
		printf("Error: malloc falló.\n");

	printf("\n");

	printf("=== ft_split ===\n");

	const	char *stringsplit = "hola celta es mi perro";
	char	csplit = ' '; 
	int		isplit = 0; 

	char	**resultadosplit = ft_split(stringsplit, c);

	while(*resultadosplit[isplit] != '\0')
	{
		printf("%s", resultadosplit[isplit]);
		free(resultadosplit[isplit]);
		isplit++;
	}
	free(resultadosplit);
	
	printf("========== FIN DE TESTS ==========\n");
	return (0);
}
