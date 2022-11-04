/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:17:47 by druina            #+#    #+#             */
/*   Updated: 2022/11/04 10:14:01 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if ((needle > haystack && haystack != NULL) || n == 0)
		return (NULL);
	while (haystack[i] != haystack[(int)n])
	{
		if (haystack[i] != needle[j])
			i++;
		else if (haystack[i] == needle[j])
		{
			if (ft_strncmp(&haystack[i], needle,
					ft_strlen((char *)needle)) == 0)
			{
				ptr = (char *)&haystack[i];
				return (ptr);
			}
		}
	}
	return (0);
}
