/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:06:26 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 01:29:35 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	n;

	n = count * size;
	if (count > 0 && size >= SIZE_MAX / count)
		return (NULL);
	p = malloc(n);
	if (!p)
		return (0);
	ft_memset(p, 0, n);
	return (p);
}
