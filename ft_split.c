/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:33:45 by druina            #+#    #+#             */
/*   Updated: 2022/11/08 17:13:04 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			count++;
		s++;
	}
	return (count);
}

char	*con(char *s, char *temp)
{
	int	l;

	l = 0;
	s = temp;
	while (*temp++)
		l++;
	return (ft_substr(s, 0, l));
}

char	**makememory(char *s, char c, int l, int j)
{
	char	**an;
	char	*temp;

	temp = s;
	an = (char **)malloc(sizeof(char *) * (count(s, c) + 2));
	while (*s++)
	{
		if (*s == c && *(s + 1) == c)
			l++;
		if (*(s + 1) == 0)
		{
			an[j++] = con(s, temp);
			break ;
		}
		if (*s == c && *(s + 1) != c)
		{
			an[j++] = ft_substr(temp, 0, (ft_strlen(temp) - ft_strlen(s)) - l);
			temp = s + 1;
			l = 0;
		}
	}
	an[j] = 0;
	return (an);
}

char	*trimit(char const *s, char c)
{
	char	*temp;

	while (*s == c)
	{
		s++;
	}
	temp = (char *)s;
	s = &s[ft_strlen((char *)s) - 1];
	while (*s == c)
	{
		s--;
	}
	temp = ft_substr(temp, 0, (ft_strlen(temp) - ft_strlen((char *)s) + 1));
	if (!temp)
		return (NULL);
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	**result;

	if (!s || s[0] == '\0' || c == 0 || c == '\0')
	{
		result = (char **)malloc(sizeof(char *) * 1);
		if (!result)
			return (NULL);
		result[0] = (char *)malloc(sizeof(char) * 1);
		result[0] = 0;
		return (result);
	}
	if (ft_strchr(s, c) == NULL)
	{
		split = (char **)malloc(sizeof(char *) * 2);
		if (!split)
			return (NULL);
		split[0] = ft_substr(s, 0, ft_strlen((char *)s));
		split[1] = 0;
		return (split);
	}
	split = makememory(trimit((char *)s, c), c, 0, 0);
	if (!split)
		return (NULL);
	return (split);
}
