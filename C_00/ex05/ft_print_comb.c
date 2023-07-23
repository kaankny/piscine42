/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:02:09 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/15 13:32:57 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first_number;
	int	second_number;
	int	third_number;

	first_number = '0';
	while (first_number <= '7')
	{
		second_number = first_number + 1;
		while (second_number <= '8')
		{
			third_number = second_number + 1;
			while (third_number <= '9')
			{
				write(1, &first_number, 1);
				write(1, &second_number, 1);
				write(1, &third_number, 1);
				if (first_number != '7')
					write(1, ", ", 2);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}
