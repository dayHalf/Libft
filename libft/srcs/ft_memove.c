/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:37:54 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/12 22:07:31 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	size_t			i;

	if (dst == 0 && src == 0)
		return (0);
	i = -1;
	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (new_dst < new_src)
	{
		while (++i < len)
		{
			new_dst[i] = new_src[i];
		}
	}
	else
	{
		while (++i < len)
		{
			new_dst[len - i - 1] = new_src[len - i - 1];
		}
	}
	return ((unsigned char *)dst);
}
