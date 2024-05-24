/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:11:28 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:13:57 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	*s = "banana";

	printf("%ld\n", ft_strlen(s));
}
*/

/*static void		ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int				main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_strlen("Hello !"));
	else if (arg == 2)
		ft_print_result(ft_strlen("1"));
	else if (arg == 3)
		ft_print_result(ft_strlen("lorem\tipsum\tdolor\nsit\namet\n"));
	else if (arg == 4)
		ft_print_result(ft_strlen(""));
	else if (arg == 5)
		ft_print_result(ft_strlen("\n\n\f\r\t"));
	else if (arg == 6)
		ft_print_result(ft_strlen("   "));
	return (0);
}
*/