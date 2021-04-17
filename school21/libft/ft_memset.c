/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:44:22 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/16 12:50:35 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p;

    p = (unsigned char*)ptr;
    while (num-- > 0)
        *p++ = value;
    return ptr;
}

int main (void)
{
   // Исходный массив
   unsigned char src[15]="1234567890";
   // Заполняем массив символом ‘1’
   ft_memset(src, '2', 5);

   // Вывод массива src на консоль
   printf("src: %s\n",src);

   return 0;
}