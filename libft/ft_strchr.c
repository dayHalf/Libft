/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:29:44 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/18 00:14:53 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*n;

	n = (char *)s;
	while (*n)
	{
		if (*n == (char) c)
			return (n);
		n++;
	}
	if (*n == (char) c)
		return (n);
	return (NULL);
}
