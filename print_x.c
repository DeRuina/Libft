/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:37:43 by druina            #+#    #+#             */
/*   Updated: 2022/12/23 14:45:31 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_x(unsigned int nb, char x, int count)
{
	char	*str;

	str = ft_nbrtohex(nb, x);
	count = count + ft_putstr(str);
	free(str);
	return (count);
}
