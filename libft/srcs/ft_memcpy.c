/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeoh <jeoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:37:49 by jeoh              #+#    #+#             */
/*   Updated: 2023/01/12 22:07:06 by jeoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
    size_t  i;
    char    *tmp_dest;
    char    *tmp_src;
    
    if (dest == NULL || src == NULL)
        return (0);
    tmp_dest = dest;
    tmp_src = src;
    i = 0;
    while ( i < num)
    {
        tmp_dest[i] = tmp_src[i];
        i++;
    }
    return (dst);
}
