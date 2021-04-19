/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:01:18 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/19 12:02:25 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ci;

	i = ft_strlen(s);
	ci = c;
	while (i >= 0)
	{
		if (s[i] == ci)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
