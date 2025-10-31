/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:30:54 by sahevia-          #+#    #+#             */
/*   Updated: 2025/10/31 20:03:37 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
