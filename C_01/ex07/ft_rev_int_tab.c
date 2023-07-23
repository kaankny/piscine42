/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:15:02 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/20 18:08:31 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	rev;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		rev = tab[a];
		tab[a] = tab[b];
		tab[b] = rev;
		a++;
		b--;
	}
}

int main()
{
	int list[4] = {1, 4, 5, 3};


	ft_rev_int_tab(list, 4);
	printf("%d, %d, %d, %d", list[0], list[1], list[2], list[3]);
}
