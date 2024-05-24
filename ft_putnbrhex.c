/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:49:41 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/24 17:16:14 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbrhex(char c, int n)
{
	int	i;

	i = n;
	if (n > 15)
	{
		ft_putnbrhex(c, n / 16);
		ft_putnbrhex(c, n % 16);
	}
	else
	{
		if (n < 10)
			n += 48;
		else
			if (c == 'x')
				n += 87;
			else if (c == 'X')
				n += 55;
		write(1, &n, 1);
	}
	return (ft_num_len_nbr(i, 16));
}
