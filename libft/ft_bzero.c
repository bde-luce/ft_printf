/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:40:48 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:14:47 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char s[] = "banana";
	size_t n = ft_strlen(s);
	ft_bzero(s, sizeof(char)*4);
	size_t	i = 0;
	
	while (i < n)
	{
		printf("%c\n", s[i]);
		i++;
	}	
}
*/

/*static void		check_bzero(void *mem, int c, int len, int n_bzero)
{
	memset(mem, c, len);
	ft_bzero(mem, n_bzero);
	write(1, mem, len);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		len;
	int		arg;

	alarm(5);
	len = 5;
	if (argc == 1 || !(mem = malloc(sizeof(*mem) * len)))
		return (0);
	if ((arg = atoi(argv[1])) == 1)
		check_bzero(mem, 'e', len, 5);
	else if (arg == 2)
		check_bzero(mem, 'e', len, 0);
	free(mem);
	return (0);
}
*/