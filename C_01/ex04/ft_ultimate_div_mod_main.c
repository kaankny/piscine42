/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:04:13 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/17 17:22:38 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	x;
	int	y;

	x = 15;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
	return (0);
}
