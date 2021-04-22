/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:46:30 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/22 15:15:45 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	size_t			end;
	char			*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (ft_isset(s1[start], set) == 0)
		start++;
	if (start == end)
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		else
			return (str);
	}
	while (ft_isset(s1[end - 1], set) == 0)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
