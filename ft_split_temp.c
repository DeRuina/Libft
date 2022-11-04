/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_temp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:33:45 by druina            #+#    #+#             */
/*   Updated: 2022/11/04 16:48:07 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*makestring(char c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	str[0] = c;
	str[1] = '\0';
	return (str);

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s || s[0] == '\0' || c == 0 || c == '\0')
		return (NULL);
	if (ft_strchr(s, c) == NULL)
		{
			split = (char **)malloc(sizeof(char *) * 2);
			split[0] = ft_substr(s, 0, ft_strlen((char *)s));
			split[1] = 0;
			return (split);
		}
		if (s[0] == c || s[ft_strlen((char *)s) - 1] == c)
		s = ft_strtrim(s, makestring(c));
}
