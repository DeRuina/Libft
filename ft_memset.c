/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:51:09 by druina            #+#    #+#             */
/*   Updated: 2022/11/02 14:46:51 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int		i;
	char	*a;

	a = (char *)b;
	i = 0;
	while (i < (int)n)
		a[i++] = (unsigned char)c;
	return (b);
}
