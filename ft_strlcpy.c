/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:27:15 by sahevia-          #+#    #+#             */
/*   Updated: 2025/10/21 19:28:34 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	size_t len = ft_strlen(src); // calcula longitud
	i = 0;
	if (!dst || !src)
		return (0);
	while (i < len && i + 1 < dsize) // copia
	{
		dst[i] = src[i];
		i++;
	}
	if (dsize > 0)
		dst[i] = '\0';
	return (len);
}

/// ISMA
/*
{
	size_t i;

	i = 0;

while (src[i] && i < dsize - 1)
{
	dst[i] = src[i];
	i++;
}
if (dsize > 0)
	dst[i] = '\0';
return (ft_strlen(src));

}*/