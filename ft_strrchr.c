/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:28:29 by druina            #+#    #+#             */
/*   Updated: 2022/10/26 16:54:18 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	ptr = NULL;
	i = ft_strlen((char *)s);
	if ((char)c == '\0')
	{
		ptr = &s[ft_strlen((char *)s) + 1];
		return ((char *)ptr);
	}
	else
	{
		while (i >= 0)
		{
			if (s[i] == (char)c)
			{
				ptr = &s[i];
				return ((char *)ptr);
			}
			i--;
		}
	}
	return ((char *)ptr);
}
