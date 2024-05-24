/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:40:33 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/09 00:28:07 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;
	size_t	j;

	j = ft_strlen(s) + 1;
	dup = malloc(sizeof(char) * j);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < j)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

/*int	main(void)
{
	const char s[] = "banana";

	printf("%s\n", ft_strdup(s));
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

int				main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;

	alarm(5);
	if (argc == 1)
		return (0);
	if (atoi(argv[1]) == 1)
	{
		if (!(str_dup = ft_strdup(str)))
			ft_print_result("NULL");
		else
			ft_print_result(str_dup);
		if (str_dup == str)
			ft_print_result("\nstr_dup's adress == str's adress");
		else
			free(str_dup);
	}
	return (0);
}
*/