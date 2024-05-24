/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:35:52 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/09 17:48:28 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_del(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

static	int	count_char(int i, char const *s, char c)
{
	int	count;

	count = 0;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count);
}

static void	free_arr(int i, char **arr)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

static	char	**split(char **arr, char const *s, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < l)
	{
		while (s[k] && s[k] == c)
			k++;
		arr[i] = malloc(sizeof(char) * (count_char(k, s, c) + 1));
		if (!arr[i])
		{
			free_arr(i, arr);
			return (NULL);
		}
		j = 0;
		while (s[k] && s[k] != c)
			arr[i][j++] = s[k++];
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;

	if (!s)
		return (NULL);
	i = count_del(s, c);
	arr = malloc(sizeof(char *) * (i + 1));
	if (!arr)
		return (NULL);
	return (split(arr, s, c, i));
}

/*int    main(void)
{
	char const *s = "";
	char c = 0;
	int    i = 0;
	char    **arr = ft_split(s, c);

	while (i <= count_del(s, c))
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
*/

/*static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void			check_split(char *s, char c)
{
	char	**tabstr;

	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

int					main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
		check_split("          ", ' ');
	else if (arg == 2)
		check_split("lorem ipsum dolor sit amet", ' ');
	else if (arg == 3)
		check_split("   lorem   ipsum dolor     sit amet   ", ' ');
	else if (arg == 4)
		check_split("lorem ipsum dolor sit amet", 'i');
	else if (arg == 5)
		check_split("lorem ipsum dolor sit amet", 'z');
	return (0);
}
*/