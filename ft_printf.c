/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:42:11 by druina            #+#    #+#             */
/*   Updated: 2022/12/23 14:50:49 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_type(char c, va_list args, int count)
{
	if (c == '%')
		count = print_c('%', count);
	else if (c == 'c')
		count = print_c(va_arg(args, int), count);
	else if (c == 's')
		count = print_s(va_arg(args, char *), count);
	else if (c == 'i' || c == 'd')
		count = print_nbr(va_arg(args, int), count);
	else if (c == 'u')
		count = print_nbr_u(va_arg(args, unsigned int), count);
	else if (c == 'x' || c == 'X')
		count = print_x(va_arg(args, unsigned int), c, count);
	else if (c == 'p')
		count = print_p(va_arg(args, void *), count);
	else
		count = print_c(c, count);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		while (*str == '%')
		{
			str++;
			count = get_type(*str, args, count);
			str++;
		}
		if (*str == '\0')
			break ;
		ft_putchar(*str);
		count++;
		str++;
	}
	va_end(args);
	return (count);
}
