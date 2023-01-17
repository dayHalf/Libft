/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:01:05 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 00:04:41 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ret;

	ret = 0;
	if (lst == 0)
		return (0);
	while (lst != 0)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == 0)
		{
			ft_lstclear(&ret, del);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst -> next;
	}
	return (ret);
}
