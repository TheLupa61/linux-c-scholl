/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:34:58 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/19 16:35:01 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    if (needle[0] == '\0')
        return ((char*)haystack);
    j = 0;
    while (j < len && haystack[j])
    {
        i = 0;
        while (j < len && needle[i] && haystack[j] && needle[i] == haystack[j])
        {
            ++i;
            ++j;
        }
        if (needle[i] == '\0')
            return ((char *)&haystack[j - i]);
        j = j - i + 1;
    }
    return (0);
}