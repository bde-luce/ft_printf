/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:41:38 by bde-luce          #+#    #+#             */
/*   Updated: 2024/04/27 19:37:29 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = 48;
	printf("%d\n", ft_isdigit(c));
}
*/

/*	static void	ft_print_result(int n)
{
	if (n)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

static void		check_isdigit(int start, int end)
{
	while (start <= end)
	{
		ft_print_result(ft_isdigit(start));
		start++;
	}
}

int				main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_isdigit(0, 47);
	else if (arg == 2)
		check_isdigit('0', '9');
	else if (arg == 3)
		check_isdigit(58, 64);
	else if (arg == 4)
		check_isdigit('A', 'Z');
	else if (arg == 5)
		check_isdigit(91, 96);
	else if (arg == 6)
		check_isdigit('a', 'z');
	else if (arg == 7)
		check_isdigit(123, 127);
	return (0);
}
*/