/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:39:09 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/08 23:36:21 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 1;
	while (big[i] && little[j] && i < len)
	{
		if (big[i] != little[j])
		{
			j = 0;
			i = k;
			k++;
		}
		else
		{
			j++;
			i++;
		}
	}
	if (j < ft_strlen(little))
		return (NULL);
	else
		return ((char *)big + (i - j));
}

/*int	main(void)
{
	//char *empty = (char*)"";
	const char big[30] = "aaabcabcd";
	//const char little[10] = "abcd";
	size_t len = 9;

	printf("%s\n", ft_strnstr(big, "abcd", len));
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

static void		check_strnstr(char *big, char *little, int len)
{
	const char *str;

	if (!(str = ft_strnstr(big, little, len)))
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
		check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	else if (arg == 2)
		check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	else if (arg == 3)
		check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	else if (arg == 4)
		check_strnstr("lorem ipsum dolor sit amet", "", 10);
	else if (arg == 5)
		check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	else if (arg == 6)
		check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	else if (arg == 7)
		check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	else if (arg == 8)
		check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	else if (arg == 9)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 17);
	else if (arg == 10)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	return (0);
}
*/