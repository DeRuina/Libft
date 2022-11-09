/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:39:06 by druina            #+#    #+#             */
/*   Updated: 2022/11/09 10:43:53 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*min(void)
{
	char	*min;
	char	*result;
	char	*new;

	result = (char *)malloc(sizeof(char) * 12);
	if (!result)
		return (NULL);
	new = result;
	min = "-2147483648";
	while (*min)
	{
		*result++ = *min++;
	}
	*result++ = '\0';
	return (new);
}

static char	*zero(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 2);
	if (!result)
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

static char	*swap(char *s)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < ft_strlen(s))
	{
		result[i] = s[len - 1];
		i++;
		len--;
	}
	result[i] = '\0';
	return (result);
}

static char	*ft_assign(int n, int count, int sign)
{
	int		i;
	char	*answer;

	i = 0;
	if (sign == -1)
		answer = (char *)malloc((sizeof(char) * count) + 2);
	else
		answer = (char *)malloc((sizeof(char) * count) + 1);
	if (!answer)
		return (NULL);
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
	int		sign;

	count = 0;
	sign = 1;
	if (n == -2147483648)
		return (min());
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
	answer = ft_assign(n, count, sign);
	return (answer);
}
