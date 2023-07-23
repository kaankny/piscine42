/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:12:41 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/17 16:44:24 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	number;

	number = 5;
	ft_ft(&number);
	printf("%d", number);
	return (0);
}
