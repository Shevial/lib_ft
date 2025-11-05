/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahevia- <sahevia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:34:05 by sahevia-          #+#    #+#             */
/*   Updated: 2025/11/05 21:13:30 by sahevia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_digitcount(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		numbercpy;
	int		i;
	char	*str;

	numbercpy = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		numbercpy = -n;
	i = ft_digitcount(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (numbercpy == 0)
		str[i] = '0';
	while (numbercpy > 0)
	{
		str[i--] = (numbercpy % 10) + '0';
		numbercpy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
