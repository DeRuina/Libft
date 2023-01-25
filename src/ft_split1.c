/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:33:45 by druina            #+#    #+#             */
/*   Updated: 2023/01/23 15:08:15 by druina           ###   ########.fr       */
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

static char	*trimit(char const *s, char c)
{
	char	*temp;
	char	*result;

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
	result = ft_substr(temp, 0, (ft_strlen(temp) - ft_strlen((char *)s) + 1));
	if (!result)
		return (NULL);
	return (result);
}

static char	**makememory(char *s, char c, int j, char **an)
{
	char	*temp;
	char	*temp2;
	int		l;

	l = 0;
	if (!s)
		return (NULL);
	temp = s;
	temp2 = s;
	while (*s++)
	{
		if (*s == c && *(s + 1) == c)
			l++;
		if (*(s + 1) == 0)
			return (return_end_answer_for_split(an, j, temp2, temp));
		if (*s == c && *(s + 1) != c)
		{
			an[j++] = ft_substr(temp, 0, (ft_strlen(temp) - ft_strlen(s)) - l);
			temp = s + 1;
			l = 0;
		}
	}
	return (an);
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
