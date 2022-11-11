/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:02:33 by druina            #+#    #+#             */
/*   Updated: 2022/11/10 10:44:53 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	if (n == 0 && *needle)
		return (NULL);
	if (n == 0 || haystack == NULL)
		return (NULL);
	while (*haystack != '\0' && n > 0)
	{
		i = 0;
		while (n - i > 0 && haystack[i] != '\0')
		{
			if (haystack[i] != needle[i])
				break ;
			if (needle[i + 1] == '\0')
				return ((char *)haystack);
			i++;
		}
		haystack++;
		n--;
	}
	return (NULL);
}
