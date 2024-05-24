/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:10:17 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/24 18:07:04 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr(int n);
int	ft_putnbrhex(char c, int n);
int	ft_num_len_ptr(unsigned long i);
int	ft_num_len_nbr(int i, int base);
int	ft_check_type(va_list x, char conv, int j);
int	ft_printf(const char *s, ...);

#endif