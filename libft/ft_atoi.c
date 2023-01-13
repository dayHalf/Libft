/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:32:36 by jeoh              #+#    #+#             */
/*   Updated: 2022/12/30 01:59:13 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_is_space(char c)
{
	if (c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

//equal to (int)strtol(str, (char **)NULL, 10);
int	ft_atoi(const char *str)
{
	int				sign;
	int				idx;
	unsigned long	res;
	unsigned long	cutoff;
	unsigned long	cutlim;

	idx = 0;
	res = 0;
	sign = 1;
	while (ft_is_space(str[idx]))
		idx++;
	if (str[idx] == '-' || str[idx] == '+')
		sign -= (str[idx++] == '-') * 2;
	if (sign == -1)
		cutoff = 
	else
		cutoff = 
	cutlim = cutoff % 10;
	while (ft_isnum(str[idx]))
	{
		if (res > cutoff || (res == cutoff && (str[idx] - '0' > cutlim)
		{
			if (sign == -1)
				return (int) (LONG_MIN);
			else
				return (int) (LONG_MAX);
		}
		res = res * 10 + (str[idx++] - '0');
	}
	return (res * sign);
}
