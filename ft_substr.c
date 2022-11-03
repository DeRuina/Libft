/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:00:33 by druina            #+#    #+#             */
/*   Updated: 2022/11/03 15:03:51 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if ((int)start >= ft_strlen((char*)s))
		return(NULL);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if(!sub)
		return(NULL);
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	if (!sub || !s || len == 0)
		return (NULL);
	return (sub);
}
