/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:00:03 by druina            #+#    #+#             */
/*   Updated: 2022/11/02 18:10:08 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = ft_strlen(dest);
	len = ft_strlen((char *)src) + ft_strlen(dest);
	if (destsize == 0)
		return (ft_strlen((char *)src));
	if ((int)destsize - 1 > ft_strlen(dest))
	{
		while (src && i < (int)destsize - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	}
	dest[j] = '\0';
	return (len);
}*/
size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(destsize == 0)
		return(ft_strlen((char*)src));
	if((int)destsize)

}
