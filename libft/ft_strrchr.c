/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:42:34 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 00:14:46 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			target;
	int				i;
	int				flag;

	target = c;
	flag = 0;
	i = ft_strlen(s);
	while (i != -1)
	{
		if (s[i] == target)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}
