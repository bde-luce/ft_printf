/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:54:12 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/09 00:16:12 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb && size && nmemb > (INT_MAX / size))
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

/*int	main(void)
{
	size_t nmemb = 2;
	size_t size = 3;
	size_t i = 0;

	if (nmemb * size == 0)
		printf("%s\n", (char *)ft_calloc(nmemb, size));
	while (i < nmemb * size)
	{
		printf("%s\n", (char *)ft_calloc(nmemb, size));
		i++;
	}
}
*/

/*int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, sizeof(char));
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
		free(str);
	}
	return (0);
}
*/