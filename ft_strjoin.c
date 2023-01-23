/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:24:50 by druina            #+#    #+#             */
/*   Updated: 2023/01/18 10:05:32 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	int		i;
	int		len;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	answer = (char *)malloc(sizeof(char) * (len + 1));
	if (!answer)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		answer[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2 != NULL && s2[len] != '\0')
	{
		answer[i] = s2[len];
		i++;
		len++;
	}
	answer[i] = '\0';
	return (answer);
}
