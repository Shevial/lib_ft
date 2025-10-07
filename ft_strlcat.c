#include <stddef.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t dlen = ft_strlen(dst);
    size_t slen = ft_strlen(src);
    size_t i = 0;

    if (dlen >= dsize)
        return dsize + slen;

    while (src[i] && (dlen + i + 1) < dsize)
    {
        dst[dlen + i] = src[i];
        i++;
    }

    dst[dlen + i] = '\0';
    return dlen + slen;

}