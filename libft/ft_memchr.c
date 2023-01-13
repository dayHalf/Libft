/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:37:42 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/14 00:58:56 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	unsigned char	target;

	target = (unsigned char)c;
	tmp_s = (unsigned char *)s;
	while (tmp_s)
	{
		if (*tmp_s == target)
			return ((void *)tmp_s);
		tmp_s++;
	}
	return (NULL);
}
