#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*p;

	if (!s || n == 0)
		return ;
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}