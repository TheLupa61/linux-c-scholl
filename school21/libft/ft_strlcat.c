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
	size_t	lsize;
	size_t	dsize;

	lsize = 0;
	dsize = ft_strlen(dst);
	while (*dst && dstsize > 0 && dstsize--)
	{
		dst++;
		lsize++;
	}
	while (*src && dstsize > 1 && dstsize--)
		*dst++ = *src++;
	if (dstsize == 1)
		*dst = '\0';
	return (dsize + lsize);
}
