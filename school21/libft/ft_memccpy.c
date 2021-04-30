/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:18:54 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/22 14:21:18 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy (void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}
#include <string.h>
int		main(void)
{
	char	src[100] = "test1 test2 testC";
	char	dst[100] = "aaaaaaaaaaaaa";
	char	src_ft[100] = "test1 test2 testC";
	char	dst_ft[100] = "aaaaaaaaaaaaa";
    printf("%s\n", dst);
    printf("%s\n", (char *)ft_memccpy(dst, src, '2', 12));
    printf("%s\n", dst);
    printf("%s\n", dst_ft);
    printf("%s\n", (char *)memccpy(dst_ft, src_ft, 'C', 12));
    printf("%s\n", dst_ft);
	return (0);
}
