/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:20:03 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/09 01:19:48 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	l;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	if (j < start)
		l = 0;
	else if (j > (len + start))
		l = len;
	else
		l = (j - start);
	substr = malloc(sizeof(char) * (l + 1));
	if (!substr)
		return (NULL);
	while (i < len && start < j)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char const s[] = "0123456789";
	unsigned int start = 9;
	size_t len = 10;

	printf("%s\n", ft_substr(s, start, len));
}
*/

/*static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_substr(char *str, int start, int len)
{
	char	*substr;

	if (!(substr = ft_substr(str, start, len)))
		ft_print_result("NULL");
	else
		ft_print_result(substr);
	if (str == substr)
		ft_print_result("\nA new string was not returned");
	else
		free(substr);
}

int				main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_substr(str, 0, 10);
	else if (arg == 2)
		check_substr(str, 7, 10);
	else if (arg == 3)
		check_substr(str, 7, 0);
	else if (arg == 4)
		check_substr(str, 0, 0);
	return (0);
}
*/