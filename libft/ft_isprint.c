/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:05:33 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:13:34 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = 30;
	printf("%d\n", ft_isprint(c));
}
*/

/*static void		ft_print_result(int n)
{
	if (n)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

static void		check_isprint(int start, int end)
{
	while (start <= end)
	{
		ft_print_result(ft_isprint(start));
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
		check_isprint(0, 47);
	else if (arg == 2)
		check_isprint('0', '9');
	else if (arg == 3)
		check_isprint(58, 64);
	else if (arg == 4)
		check_isprint('A', 'Z');
	else if (arg == 5)
		check_isprint(91, 96);
	else if (arg == 6)
		check_isprint('a', 'z');
	else if (arg == 7)
		check_isprint(123, 127);
	return (0);
}
*/