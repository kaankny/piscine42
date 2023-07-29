/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:01:47 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/29 11:46:39 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	x;
	int	y;
	int	z;
	int	i;
	int	tmp;

	i = 0;
	x = 0;
	y = 1;
	z = 1;
	while (i < index)
	{
		x = y;
		tmp = y;
		y = z;
		z = tmp + z;
		i++;
	}
	if (index < 0)
		return (-1);
	return (x);
}
