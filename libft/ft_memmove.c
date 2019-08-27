/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:31:57 by abooster          #+#    #+#             */
/*   Updated: 2019/04/22 13:51:35 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*src;
	size_t					i;

	i = 0;
	dest = d;
	src = s;
	if (dest < src)
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	else
	{
		while (n > 0)
		{
			dest[n - 1] = src[n - 1];
			n--;
		}
	}
	return (d);
}
