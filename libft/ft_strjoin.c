/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:32:08 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/16 23:32:08 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	full_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	sep_len;

	sep_len = ft_strlen(sep);
	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += sep_len;
		i++;
	}
	len -= sep_len;
	return (len);
}

char	*str_cpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

void	join(int size, char **strs, char *sep, char *res)
{
	char	*tmp;
	int		i;

	tmp = res;
	i = 0;
	while (i < size)
	{
		tmp = str_cpy(tmp, strs[i]);
		if (i != size - 1)
			tmp = str_cpy(tmp, sep);
		i++;
	}
	*(tmp) = 0x00;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		f_len;
	char	*res;

	if (size <= 0)
	{
		res = (char *)malloc(1);
		res[0] = 0x00;
		return (res);
	}
	f_len = full_len(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (f_len + 1));
	if (res == 0)
		return (0);
	join(size, strs, sep, res);
	return (res);
}
