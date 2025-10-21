#include "libft.h"
#include <stddef.h>


void *ft_memcpy(void *dest, const void *src, size_t count)
{
    size_t i;

    i = 0;

    if (!dest && !src)
        return(0);
    
        while(i < count)
    {
    ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }

    return (dest);
}
