/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 07:41:41 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/18 09:34:01 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	size_t			i;

	st = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == (unsigned char)c)
			return (st + i);
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
    printf("%s\n", src);
    printf("%s\n", (char *)ft_memchr(src, '2', 11));
    printf("%s\n", src);
    printf("%s\n", src_ft);
    printf("%s\n", (char *)memchr(src_ft, '2', 20));
    printf("%s\n", src_ft);
	return (0);
}