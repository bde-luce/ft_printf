/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:01:20 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/24 17:13:16 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_num_len_ptr(unsigned long i)
{
	int count;

	count = 0;
	while (i > 0)
	{
		i /= 16;
		count++;
	}
	return (count);
}
