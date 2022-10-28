/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:55:32 by druina            #+#    #+#             */
/*   Updated: 2022/10/28 17:24:28 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	int i;
	int j;

	i = 0;
	j = 0;
	while (ft_strchr(s1,set[i]))
		i++;
	while (ft_strrchr(s1,set[j]))
		j++;

	trim = (char *)malloc(sizeof(char) * (ft_strlen((char*)s1) - (i + j))+1);
}
