/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:47:33 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:12:53 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int	main(void)
{
	int	c;

	c = 49;
	printf("%d\n", ft_isalnum(c));
}
*/

/*static void		ft_print_result(int n)
{
	if (n)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

static void		check_isalnum(int start, int end)
{
	while (start <= end)
	{
		ft_print_result(ft_isalnum(start));
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
		check_isalnum(0, 47);
	else if (arg == 2)
		check_isalnum('0', '9');
	else if (arg == 3)
		check_isalnum(58, 64);
	else if (arg == 4)
		check_isalnum('A', 'Z');
	else if (arg == 5)
		check_isalnum(91, 96);
	else if (arg == 6)
		check_isalnum('a', 'z');
	else if (arg == 7)
		check_isalnum(123, 127);
	return (0);
}
*/