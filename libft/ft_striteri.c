/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:39:58 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/09 16:52:13 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

/*void	function(unsigned int i, char *s)
{
	*s += i;
}

int	main(void)
{
	char	s[] = "0000000000";
	void (*f)(unsigned int, char*) = &function;

	ft_striteri(s, f);
	printf("%s\n", s);
}
*/