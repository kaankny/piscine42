/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:55:26 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/07/24 10:32:55 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	r;

	d = 0;
	while (dest[d])
		d++;
	s = 0;
	while (src[s])
		s++;
	r = s;
	if (size <= d)
		r += size;
	else
		r += d;
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (r);
}
