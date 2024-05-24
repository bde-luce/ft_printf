/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:37:01 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:16:30 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}

/*int main(void)
{
    char dst[] = "teresa";
    const char src[] = "bananal";
    size_t size = sizeof(char) *7;

    ft_strlcpy(dst, src, size);
    printf("%s\n", dst);
}
*/

/*void			ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

static void		check_strlcpy(char *dest, char *src, int size, int dest_len)
{
	ft_print_result(ft_strlcpy(dest, src, size));
	write(1, "\n", 1);
	write(1, dest, dest_len);
	free(dest);
}

int				main(int argc, const char *argv[])
{
	char	*dest;
	int		arg;
	int		dest_len;

	alarm(5);
	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)) || argc == 1)
		return (0);
	memset(dest, 0, dest_len);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
		check_strlcpy(dest, "lorem", 15, dest_len);
	else if (atoi(argv[1]) == 2)
		check_strlcpy(dest, "", 15, dest_len);
	else if (atoi(argv[1]) == 3)
		check_strlcpy(dest, "lorem ipsum", 3, dest_len);
	else if (atoi(argv[1]) == 4)
		check_strlcpy(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	else if (atoi(argv[1]) == 5)
		check_strlcpy(dest, "lorem ipsum dolor sit amet", 0, dest_len);
	return (0);
}
*/