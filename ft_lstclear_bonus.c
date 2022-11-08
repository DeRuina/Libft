/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:53:47 by druina            #+#    #+#             */
/*   Updated: 2022/11/08 20:28:51 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	if (lst == NULL || del == NULL)
		return;

	while(*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst,del);
		*lst = temp;

	}
	*lst = NULL;
}
