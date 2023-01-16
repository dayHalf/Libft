/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:29:40 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/16 23:31:14 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*tmp_dest;
	size_t			i;

	i = 0;
	tmp_dest = dest;
	chr = c;
	while (i < n)
	{
		(*tmp_dest++) = chr;
		i++;
	}
	return (dest);
}
