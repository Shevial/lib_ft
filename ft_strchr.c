#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++; // esto no tendria que ser al final¿?¿?¿?
	}
	if ((char)c == '\0')
		return ((char *)s);
    //Aqui¿?¿? s++
	return (NULL);
}

