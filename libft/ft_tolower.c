/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:32:01 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:17:27 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*int	main(void)
{
	int	c = 65;

	printf("%c\n", ft_tolower(c));
}
*/

/*static void		check_tolower(int start, int end)
{
	int		c;

	while (start <= end)
	{
		c = ft_tolower(start);
		write(1, &c, 1);
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
		check_tolower(0, 47);
	else if (arg == 2)
		check_tolower('0', '9');
	else if (arg == 3)
		check_tolower(58, 64);
	else if (arg == 4)
		check_tolower('A', 'Z');
	else if (arg == 5)
		check_tolower(91, 96);
	else if (arg == 6)
		check_tolower('a', 'z');
	else if (arg == 7)
		check_tolower(123, 127);
	return (0);
}
*/