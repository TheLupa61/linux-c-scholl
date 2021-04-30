/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 08:19:07 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/18 09:35:41 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (i < n && c1[i] == c2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (c1[i] - c2[i]);
}

#include <string.h>
int		main(void)
{
	char	src[100] = "aa";
	char	dst[100] = "a1";
	char	src_ft[100] = "aa";
	char	dst_ft[100] = "a1";
    printf("%s\n", dst);
    printf("%d\n", ft_memcmp(dst, src, 3));
    printf("%s\n", dst);
    printf("%s\n", dst_ft);
    printf("%d\n", memcmp(dst_ft, src_ft, 3));
    printf("%s\n", dst_ft);
	return (0);
}