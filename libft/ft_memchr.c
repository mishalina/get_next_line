/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:51:23 by abooster          #+#    #+#             */
/*   Updated: 2019/04/19 13:05:46 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	int				i;

	arr = (unsigned char*)s;
	i = 0;
	while (n--)
	{
		if (arr[i] == (unsigned char)c)
			return (arr + i);
		i++;
	}
	return (NULL);
}
