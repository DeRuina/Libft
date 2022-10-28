/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:03:42 by druina            #+#    #+#             */
/*   Updated: 2022/10/28 10:45:27 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	char	*str;
	int		i;

	ptr = NULL;
	str = (char *)s;
	i = 0;
	while (i <= (int)n)
	{
		if (str[i] == (unsigned char)c)
		{
			ptr = str;
			return (ptr);
		}
		else
			i++;
	}
	return (ptr);
}
