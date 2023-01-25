/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:55:32 by druina            #+#    #+#             */
/*   Updated: 2022/11/09 15:54:08 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim(char const *s1, char const *set)
{
	char	*temp;
	int		i;
	int		ci;
	int		cj;

	i = 0;
	ci = 0;
	cj = 0;
	while (ft_strchr(set, s1[i]))
	{
		if (ft_strchr(set, s1[i]) != NULL)
			ci++;
		i++;
	}
	i = ft_strlen((char *)s1 + 1);
	while (ft_strrchr(set, s1[i]))
	{
		if (ft_strrchr(set, s1[i]) != NULL)
			cj++;
		i--;
	}
	temp = ft_substr(s1, ci, (ft_strlen((char *)s1) - (ci + cj)));
	return (temp);
}

static int	check(char const *s1, char const *set)
{
	int	i;
	int	ci;
	int	cj;

	i = 0;
	ci = 0;
	cj = 0;
	while (set[ci] != '\0')
	{
		while (set[ci] == s1[i])
		{
			i++;
			cj++;
		}
		if (set[ci] != s1[i])
			return (0);
		i = 0;
		ci++;
	}
	if (cj != 0)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || s1[0] == '\0')
		return ((char *)s1);
	if (!set)
		return (NULL);
	if (check(s1, set) != 0)
		return (ft_strdup(""));
	return (trim(s1, set));
}
