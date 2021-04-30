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
	char	        ci;

	i = 0;
	ci = c;
	while (s[i])
	{
		if (s[i] == ci)
			return ((char *)&s[i]);
		i++;
	}
	if (ci == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
