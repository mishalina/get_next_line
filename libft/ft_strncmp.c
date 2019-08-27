/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:51:30 by abooster          #+#    #+#             */
/*   Updated: 2019/04/22 14:26:57 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	l;

	i = 0;
	l = 0;
	if (!n)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && l < (n - 1))
	{
		i++;
		l++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
