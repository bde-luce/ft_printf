/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:45:53 by bde-luce          #+#    #+#             */
/*   Updated: 2024/05/07 15:33:34 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	void	*content1 = "Hello";
	void	*content2 = NULL;
	
	printf("test1: %s\n", (char *)ft_lstnew(content1)->content);
	printf("test2: %s\n", (char *)ft_lstnew(content2)->content);
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

static void		ft_print_result2(int n)
{
	char c;

	if (n >= 10)
		ft_print_result2(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

static t_list	*check_lstnew(void *content, int is_nb)
{
	t_list		*elem;

	if (!(elem = ft_lstnew(content)))
			ft_print_result("NULL");
	else
	{
		if (!(elem->content))
			ft_print_result("NULL");
		else
		{
			if (is_nb)
				ft_print_result2(*(int *)(elem->content));
			else
				ft_print_result((char *)elem->content);
			write(1, "\n", 1);
		}
		if (!(elem->next))
		{
			write(1, "\n", 1);
			ft_print_result("NULL");
		}
	}
	return (elem);
}

int 			main(int argc, const char *argv[])
{
	t_list		*elem;
	int			arg;


	elem = NULL;
	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		elem = check_lstnew("lorem ipsum dolor sit", 0);
	else if (arg == 2)
	{
		elem = check_lstnew(&arg, 1);
	}
	else if (arg == 3)
		elem = check_lstnew(NULL, 0);
	free(elem);
	return (0);
}
*/