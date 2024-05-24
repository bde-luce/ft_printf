/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:49:04 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:29:20 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = 11;
	else if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*str;

	nbr = n;
	i = len_nbr(nbr);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[i] = '\0';
	i--;
	while (nbr >= 1)
	{
		str[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	return (str);
}

/*int	main(void)
{
	int n = -2147483648;

	printf("%s\n", ft_itoa(n));
}
*/

/*static void		ft_print_result(char *s)
{
	int		len;

	if (!s)
		write(1, "NULL", 4);
	else
	{
		len = 0;
		while (s[len])
			len++;
		write(1, s, len);
		free(s);
	}
}

int				main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_itoa(0));
	else if (arg == 2)
		ft_print_result(ft_itoa(9));
	else if (arg == 3)
		ft_print_result(ft_itoa(-9));
	else if (arg == 4)
		ft_print_result(ft_itoa(10));
	else if (arg == 5)
		ft_print_result(ft_itoa(-10));
	else if (arg == 6)
		ft_print_result(ft_itoa(8124));
	else if (arg == 7)
		ft_print_result(ft_itoa(-9874));
	else if (arg == 8)
		ft_print_result(ft_itoa(543000));
	else if (arg == 9)
		ft_print_result(ft_itoa(-2147483648LL));
	else if (arg == 10)
		ft_print_result(ft_itoa(2147483647));
	return (0);
}
*/