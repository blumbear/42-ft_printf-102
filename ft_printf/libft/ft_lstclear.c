/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:40:41 by ttaquet           #+#    #+#             */
/*   Updated: 2023/10/22 14:38:36 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del_fun)(void *))
{
	t_list	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		ft_lstdelone(*list, del_fun);
		*list = tmp;
	}
	list = NULL;
}
