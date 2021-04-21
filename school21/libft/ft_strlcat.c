/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:08:08 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/19 16:21:14 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ssize;
	size_t	dsize;
    size_t i;

	ssize = ft_strlen(src);
	dsize = ft_strlen(dst);
	if(dstsize <= dsize)
        ssize += dstsize;
    else
        ssize += dsize;
    i = 0;
    while (src[i] && dsize + 1 < dstsize)
    {
        dst[dsize] = src[i];
        i++;
        dsize++;
    }
    dst[dsize] = '\0';
    return (ssize);
}
    
