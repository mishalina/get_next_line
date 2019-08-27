/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:37:09 by abooster          #+#    #+#             */
/*   Updated: 2019/04/23 11:33:05 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	end;
	size_t	len;

	i = 0;
	len = 0;
	if (n == 0)
		return (ft_strlen(s));
	while (s[len])
		len++;
	while (d[i] && i < n)
		i++;
	end = i;
	while (s[i - end] && i < n - 1)
	{
		d[i] = s[i - end];
		i++;
	}
	if (end < n)
		d[i] = '\0';
	return (end + len);
}
