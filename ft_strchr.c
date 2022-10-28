/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:48:56 by druina            #+#    #+#             */
/*   Updated: 2022/10/26 16:54:04 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	ptr = NULL;
	i = 0;
	if ((char)c == '\0')
	{
		ptr = &s[ft_strlen((char *)s) + 1];
		return ((char *)ptr);
	}
	else
	{
		while (s[i] != '\0')
		{
			if (s[i] == (char)c)
			{
				ptr = &s[i];
				return ((char *)ptr);
			}
			i++;
		}
	}
	return ((char *)ptr);
}
