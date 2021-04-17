/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:58:10 by ccorrin           #+#    #+#             */
/*   Updated: 2021/04/16 16:23:21 by ccorrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_strlen(char *str);
int	ft_atoi(char *str);
void *ft_memset(void *ptr, int value, size_t num);
void ft_bzero(void *s, size_t length);
void *ft_memcpy (void *destination, const void *source, size_t n);
#endif
