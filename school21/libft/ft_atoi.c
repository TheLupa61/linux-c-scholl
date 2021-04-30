/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:44:22 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/22 14:01:13 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int		i;
	int				num;

	i = 0;
	num = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			num = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		i *= 10;
		i += (*str - 48);
		if (i > 2147483647 && num == 1)
			return (-1);
		if (i > 2147483648 && num == -1)
			return (0);
		str++;
	}
	return ((int)(i * num));
}

int main()
{
    char a[20] = "sada";
    printf("%d\n", ft_atoi(a));
    printf("%d\n", atoi(a));
}
