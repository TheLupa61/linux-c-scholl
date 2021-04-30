/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 06:35:01 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/18 10:08:11 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = -1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (++i < len)
			d[i] = s[i];
	}
	return (d);
}

#include <string.h>
int		main(void)
{
	char	src[100] = "tfasfasfs";
	char	dst[100] = "aaaaaaaaaaaaa";
	char	src_ft[100] = "test1 test2 testC";
	char	dst_ft[100] = "aaaaaaaaaaaaa";
    printf("%s\n", dst);
    printf("%s\n", (char *)ft_memmove(dst, src, 5));
    printf("%s\n", dst);
    printf("%ld\n", strlen(src));
    printf("%s\n", dst_ft);
    printf("%s\n", (char *)memmove(dst_ft, src_ft, 12));
    printf("%s\n", dst_ft);
	return (0);
}
