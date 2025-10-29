#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totalcal;

	totalcal = count * size;

	if (count != 0 && totalcal / count != size)
		return (NULL);

	ptr = malloc(totalcal);
	if (!ptr)
		return (NULL);

	ft_bzero(ptr, totalcal);
	return (ptr);
}
