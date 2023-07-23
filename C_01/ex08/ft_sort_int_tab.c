/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:19:17 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/16 13:22:11 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
