/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:31:28 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/12 22:08:02 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*new_s1;
	unsigned char			*new_s2;
	size_t					i;

	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (new_s1[i] != new_s2[i])
		{
			return (new_s1[i] - new_s2[i]);
		}
		i++;
	}
	return (0);
}
