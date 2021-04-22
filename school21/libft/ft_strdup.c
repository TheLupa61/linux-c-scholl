/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:32:41 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/22 14:34:25 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*str1;
	int		i;

	len = ft_strlen(str);
	str1 = (char *)malloc(sizeof(char) * (len + 1));
	if (str1 == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
