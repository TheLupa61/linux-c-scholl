/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:01:07 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/19 12:00:36 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ci;

	i = 0;
	ci = c;
	while (s[i] != ci)
	{
		if (!s[i++])
			return (NULL);
	}
	return ((char *)&s[i]);
}
