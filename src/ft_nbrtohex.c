/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrtohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:38:07 by druina            #+#    #+#             */
/*   Updated: 2022/12/01 08:47:59 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nbrtohex(unsigned long long nb, char x)
{
	char	hex[50];
	char	*ptr;

	if (nb == 0)
		return (ptr = ft_strdup("0"));
	ptr = &hex[50];
	*ptr = '\0';
	while (nb != 0)
	{
		if (nb % 16 < 10)
			*--ptr = (nb % 16) + 48;
		else if (nb % 16 > 9 && x == 'x')
			*--ptr = (nb % 16) + 87;
		else if (nb % 16 > 9 && x == 'X')
			*--ptr = (nb % 16) + 55;
		nb = nb / 16;
	}
	ptr = ft_strdup(ptr);
	return (ptr);
}
