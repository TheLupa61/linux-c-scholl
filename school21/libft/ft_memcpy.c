/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 06:02:16 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/22 14:25:48 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = -1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src)
		return (dst);
	while (++i < n)
		d[i] = s[i];
	return (d);
}

#include <string.h>
int		main(void)
{
	char str[20] = "hello";
    char str2[20] = "hello";
    ft_memcpy(str + 3, str, 19);
    printf("%s\n", str);
    ft_memmove(str2 + 3, str2, 17);
    printf("%s\n", str2);
	return (0);
}