/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:00:49 by druina            #+#    #+#             */
/*   Updated: 2022/10/31 16:53:00 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*makestring(char c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	str[0] = c;
	str[1] = '\0';
	return (str);
}


char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	j = 0;
	k = 0;
	count = 0;
	if (!s || s[0] == '\0')
		return (NULL);
	if (ft_strchr(s, c) == NULL)
	{
		split = (char **)malloc(sizeof(char *) * 2);
		split[0] = ft_substr(s, 0, ft_strlen((char *)s));
		split[1] = "\0";
		return (split);
	}
	if (s[i] == c || s[ft_strlen((char*)s)-1] == c)
		s = ft_strtrim(s, makestring(c));
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	i = 0;
	split = (char **)malloc(sizeof(char *) * (count + 2));
	while (s[i] != '\0')
	{
		if (j == 0 && s[i] == c)
			split[j++] = ft_substr(s, 0, i);
		if (s[i] == c && s[i + 1] != c)
		{
			k = i + 1;
			while (s[k] != c && s[k] != '\0')
				k++;
			split[j] = ft_substr(s, i + 1, k - i - 1);
			j++;
		}
		i++;
		k = 0;
	}
	split[j] = "\0";
	return (split);
}
int main(void)
{
	int i;
	char **split;

	i = 0;
	char str[] = "eeeeeeeDeannnne";
	char c = 'r';
	split = ft_split(str, c);
	while (i < 2)
	{
		printf("%s\n", split[i]);
		i++;
	}
	return(0);
}
