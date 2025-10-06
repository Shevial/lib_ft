#include <stddef.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
    size_t len = ft_strlen(src); //calcula longitud
    size_t i = 0;

    if (!dst || !src)
        return 0;

    while (i < len && i + 1 < dsize) //copia 
    {
        dst[i] = src[i];
        i++;
    }

    if (dsize > 0)
        dst[i] = '\0';

    return len;
}



///ISMA
/*
{
    size_t i;
    
    i = 0;

while (src[i] && i < dstsize - 1)
{
    dst[i] = src[i];
    i++;
}
if (dstsize > 0)
    dst[i] = '\0';
return ft_strlen(src);

}*/