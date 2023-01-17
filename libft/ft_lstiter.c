/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:01:05 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 00:04:22 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst == 0 || f == 0)
		return ;
	tmp = lst;
	while (tmp != 0)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
