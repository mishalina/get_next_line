/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 14:15:53 by abooster          #+#    #+#             */
/*   Updated: 2019/04/19 15:32:58 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	size_t		i;
	size_t		len;
	char		*dup;

	len = 0;
	while (str[len] != '\0' && len != n)
		len++;
	dup = (char*)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
