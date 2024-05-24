/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:09:32 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/10 18:24:13 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	void	*temp;

	temp = (void *)src;
	if (!dest && !src)
		return (dest);
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)temp)[i];
			i++;
		}
	}
	else
	{
		while (n--)
			((char *)dest)[n] = ((char *)temp)[n];
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "consectetur";
	char	*dest;
	char	src1[] = "consectetur";
	char	*dest1;
	
	dest = src + 1;
	dest1 = src1 + 1;
	printf("%s\n", (char *)ft_memmove(dest, src, 5));
	printf("%s\n", (char *)memmove(dest1, src1, 5));
}


/*static void		check_memmove(void *dest, void *src, int n)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
}

int				main(int argc, const char *argv[])
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	int		arg;

	dest = src + 1;
	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_memmove(dest, "consectetur", 5);
	else if (arg == 2)
		check_memmove(dest, "con\0sec\0\0te\0tur", 10);
	else if (arg == 3)
		check_memmove(dest, src, 8);
	else if (arg == 4)
		check_memmove(src, dest, 8);
	else if (arg == 5)
		check_memmove(src, dest, 0);
	return (0);
}
*/