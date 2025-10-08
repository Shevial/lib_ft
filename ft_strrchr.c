#include <stddef.h>  // para NULL
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	last = NULL;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *) &s[i]; //Guarda en last la posición exacta dentro de la cadena donde encontro el carácter.
		i++;
	}

	if ((char)c == '\0')
		return ((char *) &s[i]);

	return (last);
}
