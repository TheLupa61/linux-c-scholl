/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:21:11 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/28 18:21:13 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack && i <= len--)
	{
		j = ft_strncmp((char *)haystack, (char *)needle, i);
		if (!j)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
