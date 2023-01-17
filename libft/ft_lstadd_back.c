/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:59:31 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 00:37:07 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == 0 || new == 0)
	{
		return ;
	}
	if ((*lst) == 0)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->next = 0;
}
