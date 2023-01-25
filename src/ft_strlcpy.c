/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:13:32 by druina            #+#    #+#             */
/*   Updated: 2022/11/11 13:40:15 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	int	move;

	move = 0;
	if (destsize == 0)
		return (ft_strlen((char *)src));
	if (destsize > 0)
	{
		while (*(src + move) && move != (int)destsize - 1)
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
