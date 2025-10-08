#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t ft_strlcat(char *dst, const char *src, size_t dsize);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);



#endif
