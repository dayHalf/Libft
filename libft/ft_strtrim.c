/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:32:38 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/16 23:32:38 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ret;

	if (!s1)
	{
		ret = (char *)malloc(1 * sizeof(char));
		if (!ret)
			return (0);
		ret[0] = 0;
		return (ret);
	}
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) && s1[end - 1])
		end--;
	ret = (char *)malloc((end - start + 1) * sizeof(char));
	if (!ret)
		return (0);
	ft_memcpy(ret, s1 + start, (size_t)(end - start));
	ret[end - start] = 0;
	return (ret);
}
