/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:46:25 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/09 16:23:18 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *str)
{
	size_t	i;
	size_t	r;

	i = 0;
	r = 0;
	while (str[i] && r == 0)
	{
		if (c == str[i])
			r = 1;
		i++;
	}
	return (r);
}

size_t	getj(size_t i, char const *s1, char const *set)
{
	size_t	j;

	if (s1[i] != '\0')
	{
		j = ft_strlen(s1);
		while (check(s1[j - 1], set) == 1)
			j--;
	}
	else
		j = i;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trim;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (check(s1[i], set) == 1 && s1[i])
		i++;
	j = getj(i, s1, set);
	trim = malloc(sizeof(char) * (j - i + 1));
	if (!trim)
		return (NULL);
	k = 0;
	while (i < j)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}

/*int	main(void)
{
	char const *s1 = "abcdba";
	char const *set = "acb";
	char *s2 = "d";
	char *ret = ft_strtrim(s1, set);

	if (!strcmp(ret, s2))
        printf("success");
    else
		printf("fail");
	//printf("%s\n", ft_strtrim(s1, set));
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

static void		check_strtrim(char *s1, char *set)
{
	char	*strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
}

int				main(int argc, const char *argv[])
{
	char	set [] = "\t \n";
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		check_strtrim(s1, set);
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet \n \t ";
		check_strtrim(s1, set);
	}
	else if (arg == 3)
	{
		char s1[] = " \n \t lorem ipsum dolor sit amet";
		check_strtrim(s1, set);
	}
	else if (arg == 4)
	{
		char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
		check_strtrim(s1, set);
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		check_strtrim(s1, set);
	}
	return (0);
}
*/