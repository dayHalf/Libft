/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:31:31 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/16 23:31:31 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_len(int nb)
{
	int		res;

	res = 0;
	while (nb != 0)
	{
		nb /= 10;
		res++;
	}
	return (res);
}

void	put_absnbr(int nb, int fd)
{
	char	digit;
	int		len;
	int		oprend;
	int		i;

	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	len = check_len(nb);
	i = len;
	oprend = 1;
	while (i != 1)
	{
		oprend *= 10;
		i--;
	}
	while (oprend != 0)
	{
		digit = '0' + nb / oprend;
		write(fd, &digit, 1);
		nb %= oprend;
		oprend /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
		put_absnbr(n, fd);
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		write(fd, "-", 1);
		n *= -1;
		put_absnbr(n, fd);
	}
}
