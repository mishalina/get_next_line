/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:13:11 by abooster          #+#    #+#             */
/*   Updated: 2019/04/22 14:07:42 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	const unsigned char	*box1;
	const unsigned char	*box2;
	size_t				i;

	box1 = (const unsigned char*)arr1;
	box2 = (const unsigned char*)arr2;
	i = 0;
	while (i < n)
	{
		if (box1[i] != box2[i])
			return (box1[i] - box2[i]);
		i++;
	}
	return (0);
}
