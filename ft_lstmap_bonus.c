/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:31:37 by druina            #+#    #+#             */
/*   Updated: 2022/11/08 20:37:30 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *new;

	if(lst == NULL || f == NULL || del == NULL)
		return;
	while(lst)
	{

	}
}
