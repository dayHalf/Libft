/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:31:43 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/16 23:31:43 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	if (!is_sep(*str, charset))
	{
		cnt++;
		str++;
	}
	while (*str)
	{
		if (is_sep(*(str - 1), charset) && !is_sep(*str, charset))
			cnt++;
		str++;
	}
	return (cnt);
}

char	*str_dup(char *str, int len)
{
	char	*res;
	char	*tmp;

	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (0);
	tmp = res;
	while (len > 0)
	{
		*tmp = *str;
		tmp++;
		str++;
		len--;
	}
	*tmp = 0x00;
	return (res);
}

void	split(char *str, char *charset, int word, char **res)
{
	int		i;
	int		len;
	char	*tmp;

	i = 0;
	while (i < word)
	{
		while (is_sep(*str, charset))
			str++;
		tmp = str;
		len = 0;
		while (!is_sep(*tmp, charset))
		{
			tmp++;
			len++;
		}
		res[i] = str_dup(str, len);
		str += len;
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	char	**res;	
	char	*tmp;
	int		len;

	if (*charset == 0x00)
	{
		res = (char **)malloc(sizeof(char *) * 2);
		len = 0;
		tmp = str;
		while (*(tmp++))
		{
			len++;
		}
		res[0] = str_dup(str, len);
		res[1] = 0;
		return (res);
	}
	word = count_word(str, charset);
	res = (char **)malloc(sizeof(char *) * (word + 1));
	if (res == 0)
		return (0);
	split(str, charset, word, res);
	res[word] = 0;
	return (res);
}