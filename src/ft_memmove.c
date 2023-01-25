/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:33:05 by druina            #+#    #+#             */
/*   Updated: 2022/11/08 18:04:47 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		j;
	char	*a;
	char	*b;

	j = (int)n - 1;
	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (a > b)
	{
		while (j >= 0)
		{
			a[j] = b[j];
			j--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (a);
}
