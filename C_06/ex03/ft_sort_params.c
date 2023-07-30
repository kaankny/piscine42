/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:03:33 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/29 16:29:29 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **f, char **s)
{
	char	*tmp;

	tmp = *f;
	*f = *s;
	*s = tmp;
}

int	ft_strcmp(char *first, char *second)
{
	int	i;

	i = 0;
	while (first[i] && second[i] && first[i] == second[i])
		i++;
	return (first[i] - second[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		ft_putstr("\n");
		j++;
	}
	return (0);
}
