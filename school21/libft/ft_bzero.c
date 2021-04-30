/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 05:54:59 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/18 06:00:06 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int		main(void)
{
	char	src[100] = "test1 test2 testC";
	char	dst[100] = "aaaaaaaaaa";
	char	src_ft[100] = "test1 test2 testC";
	char	dst_ft[100] = "aaaaaaaaaa";;
    printf("%s\n", src);
    ft_bzero(src, 3);
    printf("%d", src[3]);
	return (0);
}