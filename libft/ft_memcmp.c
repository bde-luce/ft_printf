/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:24:46 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/08 15:26:22 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*int main(void)
{
    const char *s1 = "banana";
    const char *s2 = "babana";
    size_t n = 2;

    printf("%i\n", ft_memcmp(s1, s2, n));
}
*/

/*static void		ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

int				main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_memcmp("salut", "salut", 5));
	else if (arg == 2)
		ft_print_result(ft_memcmp("t\200", "t\0", 2));
	else if (arg == 3)
		ft_print_result(ft_memcmp("testss", "test", 5));
	else if (arg == 4)
		ft_print_result(ft_memcmp("test", "tEst", 4));
	else if (arg == 5)
		ft_print_result(ft_memcmp("", "test", 4));
	else if (arg == 6)
		ft_print_result(ft_memcmp("test", "", 4));
	else if (arg == 7)
		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	else if (arg == 8)
		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
	else if (arg == 9)
		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	return (0);
}
*/