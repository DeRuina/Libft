/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:03:42 by druina            #+#    #+#             */
/*   Updated: 2022/11/02 09:51:05 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*str;
	int				i;

	ptr = NULL;
	str = (unsigned char *)s;
	i = 0;
	while (i < (int)n)
	{
		if (str[i] == (unsigned char)c)
		{
			ptr = &str[i];
			return (ptr);
		}
		else
			i++;
	}
	return (ptr);
}
