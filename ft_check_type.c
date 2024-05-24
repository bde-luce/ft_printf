/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:03:09 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/24 17:13:27 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_type(va_list x, char conv, int j)
{
	if (conv == 'c')
		j += ft_putchar(va_arg(x, int));
	else if (conv == 's')
		j += ft_putstr(va_arg(x, char *));
	else if (conv == 'p')
	{
		write(1, "0x", 2);
		j += ft_putptr((unsigned long)va_arg(x, void *)) + 2;
	}
	else if (conv == 'd' || conv == 'i')
		j += ft_putnbr(va_arg(x, int));
	else if (conv == 'u')
		j += ft_putnbr(va_arg(x, unsigned int));
	else if (conv == 'x')
		j += ft_putnbrhex('x', va_arg(x, unsigned int));
	else if (conv == 'X')
		j += ft_putnbrhex('X', va_arg(x, unsigned int));
	else if (conv == '%')
		j += ft_putchar('%');
	return (j);
}
