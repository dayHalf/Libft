/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:29:44 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/16 23:31:58 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	target;

	i = 0;
	target = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == target)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
