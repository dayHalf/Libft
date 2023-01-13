/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:29:49 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/14 00:55:09 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*dup;

	len = ft_strlen(s1);
	dup = (char *)malloc(len);
	if (!dup)
		retrun (0);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}