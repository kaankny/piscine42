/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:42:17 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/15 16:30:43 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int len, char first, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == len)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		while (line <= y)
		{
			if (line == 1)
				ft_printline(x, 'A', 'B', 'A');
			else if (line == y)
				ft_printline(x, 'C', 'B', 'C');
			else
				ft_printline(x, 'B', ' ', 'B');
			line++;
		}
	}
}
