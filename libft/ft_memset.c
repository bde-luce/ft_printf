/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:22:25 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:14:29 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char s[] = "banana";
	char c = 'x';

	printf("\nBefore memset(): %s\n", s);
	ft_memset(s, c, sizeof(c)*4);
	printf("After memset():  %s\n", s);
}
*/

/*static void		check_memset(void *mem, int c, int n, int mem_size)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	free(mem);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;
	int		mem_size;

	alarm(5);
	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)) || argc == 1)
		return (0);
	memset(mem, 'j', mem_size);
	if ((arg = atoi(argv[1])) == 1)
		check_memset(mem, 'c', 5, mem_size);
	else if (arg == 2)
		check_memset(mem, 'c', 14, mem_size);
	else if (arg == 3)
		check_memset(mem, '\n', 6, mem_size);
	else if (arg == 4)
		check_memset(mem, '\0', 1, mem_size);
	return (0);
}
*/