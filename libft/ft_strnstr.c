/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:15:36 by abooster          #+#    #+#             */
/*   Updated: 2019/04/22 19:40:06 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	i;
	size_t	t;

	i = 0;
	if (*l == '\0')
		return ((char*)b);
	while (b[i] && i < len)
	{
		t = 0;
		while (b[i + t] == l[t] && (i + t) < len)
		{
			if (l[t + 1] == '\0')
				return ((char *)b + i);
			else
				t++;
		}
		i++;
	}
	return (NULL);
}
