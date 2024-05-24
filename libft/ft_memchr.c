/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:16:20 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/08 23:47:45 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    const char s[] = {0, 1, 2, 3, 4, 5};
    int c = 1;
    size_t  n = 2;

    printf("%s\n", (unsigned char *)ft_memchr(s, c, n));
}
*/

/*static void		ft_print_result(const char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_memchr(void *s, char c, int n)
{
	const char *str;

	str = ft_memchr(s, c, n);
	if (!str)
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

int				main(int argc, const char *argv[])
{
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_memchr("bonjour", 'b', 4);
	else if (arg == 2)
		check_memchr("bonjour", 'o', 7);
	else if (arg == 3)
		check_memchr("bonjourno", 'n', 2);
	else if (arg == 4)
		check_memchr("bonjour", 'j', 6);
	else if (arg == 5)
		check_memchr("bonjour", 's', 7);
	else if (arg == 6)
	{
		int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

		printf("%s", (char *)ft_memchr(tab, -1, 7));
	}
	return (0);
}
*/