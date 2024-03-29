/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_2d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:44:16 by druina            #+#    #+#             */
/*   Updated: 2023/02/08 11:08:25 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_2d(char **str)
{
	char	**temp;

	temp = str;
	while (*str)
	{
		free(*str);
		str++;
	}
	free(temp);
	return (-1);
}
