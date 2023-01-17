/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:59:59 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 00:40:13 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == 0 || new == 0)
	{
		return ;
	}
	if ((*lst) == 0)
	{
		*lst = new;
		return ;
	}
	new -> next = *lst;
	*lst = new;
}
