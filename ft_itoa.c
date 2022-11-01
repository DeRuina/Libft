/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:39:06 by druina            #+#    #+#             */
/*   Updated: 2022/11/01 12:17:31 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*zero(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 2);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*swap(char *s)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	while (i < ft_strlen(s))
	{
		result[i] = s[len - 1];
		i++;
		len--;
	}
	result[i] = '\0';
	return (result);
}

char	*assign(int n, int count, int sign)
{
	int		i;
	char	*answer;

	i = 0;
	if (sign == -1)
		answer = (char *)malloc((sizeof(char) * count) + 2);
	else
		answer = (char *)malloc((sizeof(char) * count) + 1);
	while (i < count)
	{
		answer[i] = ((n % 10) + '0');
		n = (n - n % 10) / 10;
		i++;
	}
	if (sign == -1)
	{
		answer[i] = '-';
		answer[i + 1] = '\0';
	}
	else
		answer[i] = '\0';
	answer = swap(answer);
	return (answer);
}

char	*ft_itoa(int n)
{
	char	*answer;
	int		count;
	int		nb;
	int		i;
	int		sign;

	i = 0;
	count = 0;
	sign = 1;
	if (n == 0)
		return (zero());
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	nb = n;
	while (nb > 0)
	{
		nb = (nb - nb % 10) / 10;
		count++;
	}
	answer = assign(n, count, sign);
	return (answer);
}
