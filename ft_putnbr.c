/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:49:53 by druina            #+#    #+#             */
/*   Updated: 2022/11/28 08:10:45 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = ft_nbrlen(nb);
	if (nb == -2147483648)
		write(1, "-2147483648", 12);
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar('0' + nb);
	return (count);
}
