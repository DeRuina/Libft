/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:32 by druina            #+#    #+#             */
/*   Updated: 2022/11/09 17:41:22 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	int	move;

	move = 0;
	if (destsize == 0)
		return (ft_strlen((char *)src));
	if (destsize > 0)
	{
		while (*(src + move) && move != (int)destsize -1)
		{
			if (move == (int)destsize)
			{
				move--;
				break ;
			}
			*(dest + move) = *(src + move);
			move++;
		}
	}
	*(dest + move) = '\0';
	return (ft_strlen((char *)src));
}
