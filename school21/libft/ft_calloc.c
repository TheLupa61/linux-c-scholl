/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:06:25 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/22 14:09:11 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}

int		main(void)
{
	char	src[100] = "test1 test2 testC";
	char	dst[100] = "aaaaaaaaaa";
	char	src_ft[100] = "test1 test2 testC";
	char	dst_ft[100] = "aaaaaaaaaa";
    char *a = ft_calloc(0, 20);
    printf("%s\n", src);
    ft_bzero(src, 3);
    printf("%d", src[3]);
	return (0);
}