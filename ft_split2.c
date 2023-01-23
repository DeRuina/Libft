/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:08:03 by druina            #+#    #+#             */
/*   Updated: 2023/01/23 10:15:13 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*con_for_split(char *temp)
{
	int		l;
	char	*sub;
	char	*s2;

	l = 0;
	s2 = temp;
	while (*temp++)
		l++;
	sub = ft_substr(s2, 0, l);
	if (!sub)
	{
		free(sub);
		free(s2);
		return (NULL);
	}
	return (sub);
}

char	**return_end_answer_for_split(char **an, int j, char *temp2, char *temp)
{
	an[j++] = con_for_split(temp);
	an[j] = 0;
	free(temp2);
	return (an);
}
