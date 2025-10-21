/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:27:05 by sahevia-          #+#    #+#             */
/*   Updated: 2025/10/21 19:28:33 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t dlen = ft_strlen(dst);
	size_t slen = ft_strlen(src);
	size_t i = 0;

	if (dlen >= dsize)
		return (dsize + slen);

	while (src[i] && (dlen + i + 1) < dsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}

	dst[dlen + i] = '\0';
	return (dlen + slen);
}