/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:40:49 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/19 14:26:28 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int i;
	if (argc == 3)
	{
		rush(*argv[1] - '0', *argv[2] - '0'); 
	}
	return 0;
}
