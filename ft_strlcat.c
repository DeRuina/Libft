/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:00:03 by druina            #+#    #+#             */
/*   Updated: 2022/11/03 12:11:06 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	if (destsize == 0)
		return (ft_strlen((char *)src));
	i = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen((char *)src);
	if (destsize < lendest)
		return (lensrc + destsize);
	while (destsize > lendest + 1 + i && *(src + i) != '\0')
	{
		*(dest + lendest + i) = *(src + i);
		i++;
	}
	*(dest + lendest + i) = '\0';
	return (lendest + lensrc);
}
