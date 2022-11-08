/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:17:47 by druina            #+#    #+#             */
/*   Updated: 2022/11/08 17:01:13 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_find(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	while (i != (int)n && i < ft_strlen((char *)haystack))
	{
		if (haystack[i] != needle[j])
			i++;
		else if (haystack[i] == needle[j])
		{
			if (ft_strlen((char *)needle) > (int)(n - i))
				return (NULL);
			if (ft_strncmp(&haystack[i], needle,
					ft_strlen((char *)needle)) == 0)
			{
				ptr = (char *)&haystack[i];
				return (ptr);
			}
			else
				return (NULL);
		}
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (((ft_strlen((char *)needle) > ft_strlen((char *)haystack)
				&& haystack != NULL)) || n == 0)
		return (NULL);
	return (ft_find(haystack, needle, n));
}
