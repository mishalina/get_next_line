/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:27:21 by abooster          #+#    #+#             */
/*   Updated: 2019/04/24 17:47:22 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size < 65535)
	{
		str = (char*)malloc(sizeof(char) * (size + 1));
		if (str == NULL)
			return (NULL);
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}
