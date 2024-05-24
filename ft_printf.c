/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:37:48 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/24 17:28:16 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		j;
	va_list x;
	
	i = 0;
	j = 0;
	va_start(x, s);
	while (s[i])
	{
		if (s[i] != '%')
			j += ft_putchar(s[i]);
		else
		{
			j = ft_check_type(x, s[i + 1], j);
			i++;
		}
		i++;
	}
	va_end(x);
	return (j);
}

/*int	main(void)
{
	//int	a = 32;
	//int *ptr = &a;
	int i;
	int j;

	i = ft_printf("%X\n", 12345678);
	j = printf("%X\n", 12345678);
	printf("%i\n%i\n", i, j);
}
*/