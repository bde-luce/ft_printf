/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:08:02 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/24 17:16:06 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(unsigned long ptr)
{
	unsigned long	i;

	i = ptr;
	if (ptr > 15)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ptr += 48;
		else
			ptr += 87;
		write(1, &ptr, 1);
	}
	return (ft_num_len_ptr(i));
}
