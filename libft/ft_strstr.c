/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:03:54 by abooster          #+#    #+#             */
/*   Updated: 2019/04/20 18:23:17 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	unsigned char	*box;
	unsigned char	*find;
	int				i;
	int				t;

	i = 0;
	t = 0;
	box = (unsigned char*)str1;
	find = (unsigned char*)str2;
	if (find[0] == '\0')
		return ((char*)str1);
	while (box[i])
	{
		t = 0;
		while (find[t] == box[i + t])
		{
			if (find[t + 1] == '\0')
				return ((char*)(str1 + i));
			t++;
		}
		i++;
	}
	return (NULL);
}
