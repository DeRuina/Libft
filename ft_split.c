/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:33:45 by druina            #+#    #+#             */
/*   Updated: 2022/11/09 10:44:44 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *s, char c)
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

static char	*con(char *s, char *temp)
{
	int	l;

	l = 0;
	s = temp;
	while (*temp++)
		l++;
	return (ft_substr(s, 0, l));
}

static char	**makememory(char *s, char c, int j, char **an)
{
	char	*temp;
	int		l;

	l = 0;
	if (!s)
		return (NULL);
	temp = s;
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

static char	*trimit(char const *s, char c)
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

	if (!s || s[0] == '\0' || c == '\0')
	{
		split = (char **)malloc(sizeof(char *) * 1);
		if (!split)
			return (NULL);
		split[0] = (char *)malloc(sizeof(char) * 1);
		split[0] = 0;
		return (split);
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
	split = (char **)malloc(sizeof(char *) * (count(s, c) + 2));
	if (!split)
		return (NULL);
	split = makememory(trimit((char *)s, c), c, 0, split);
	return (split);
}
