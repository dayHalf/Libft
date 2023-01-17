/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:00:15 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 00:03:36 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*to_free;

	if (!lst || !del)
		return ;
	if (!(*lst))
		return ;
	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		to_free = tmp;
		tmp = tmp->next;
		free(to_free);
	}
	*lst = 0;
}
