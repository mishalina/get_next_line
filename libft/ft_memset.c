/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:01:23 by abooster          #+#    #+#             */
/*   Updated: 2019/04/16 17:04:01 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	symbol;

	symbol = (unsigned char)c;
	if (n == 0)
		return (destination);
	str = (unsigned char*)destination;
	while (n--)
	{
		*str = symbol;
		if (n)
			str++;
	}
	return (destination);
}
