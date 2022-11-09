/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:16:04 by druina            #+#    #+#             */
/*   Updated: 2022/11/09 10:43:00 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	nb;
	int				sign;
	int				i;

	nb = 0;
	sign = 1;
	i = 0;
	while (ft_iswhitespace(str[i]) != 0)
	{
		i++;
	}
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
		if (nb > 9223372036854775807 && sign == -1)
			return (0);
		else if (nb > 9223372036854775807 && sign == 1)
			return (-1);
	}
	return (sign * nb);
}
