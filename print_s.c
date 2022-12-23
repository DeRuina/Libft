/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:20:31 by druina            #+#    #+#             */
/*   Updated: 2022/12/23 14:45:26 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_s(char *str, int count)
{
	if (str == NULL)
	{
		count = count + ft_putstr("(null)");
		return (count);
	}
	count = count + ft_putstr(str);
	return (count);
}
