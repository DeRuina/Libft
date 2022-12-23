/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:39:00 by druina            #+#    #+#             */
/*   Updated: 2022/12/23 14:45:21 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_p(void *ptr, int count)
{
	char	*str;

	write(1, "0x", 2);
	count = count + 2;
	str = ft_nbrtohex((unsigned long long)ptr, 'x');
	count = count + ft_putstr(str);
	free(str);
	return (count);
}
