/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:28:29 by druina            #+#    #+#             */
/*   Updated: 2022/11/02 11:13:05 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*reverse;

	i = ft_strlen((char *)s);
	reverse = (char *)&s[i];
	while (i >= 0)
	{
		if (*reverse == (char)c)
			return ((char *)reverse);
		reverse--;
		i--;
	}
	if ((char)c == '\0')
		return ((char *)reverse);
	return (NULL);
}
