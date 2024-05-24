/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:58:59 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/09 01:34:14 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] - s2[i]) == 0 && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
    const char *s1 = "atoms\0\0\0\0";
    const char *s2 = "atoms\0abc";
    size_t n = 8;

    printf("%i\n", ft_strncmp(s1, s2, n)); 
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
		ft_print_result(ft_strncmp("salut", "salut", 5));
	else if (arg == 2)
		ft_print_result(ft_strncmp("test", "testss", 7));
	else if (arg == 3)
		ft_print_result(ft_strncmp("testss", "test", 7));
	else if (arg == 4)
		ft_print_result(ft_strncmp("test", "tEst", 4));
	else if (arg == 5)
		ft_print_result(ft_strncmp("", "test", 4));
	else if (arg == 6)
		ft_print_result(ft_strncmp("test", "", 4));
	else if (arg == 7)
		ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	else if (arg == 8)
		ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
	else if (arg == 9)
		ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	else if (arg == 10)
		ft_print_result(ft_strncmp("abcdefgh", "", 0));
	else if (arg == 11)
		ft_print_result(ft_strncmp("test\200", "test\0", 6));
	return (0);
}
*/