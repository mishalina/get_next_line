/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:42:33 by abooster          #+#    #+#             */
/*   Updated: 2019/04/24 15:55:49 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmem(char const *s, char c, int *i)
{
	int			t;
	char		*mem;

	t = 0;
	if (!(mem = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[*i] != c && s[*i])
	{
		mem[t] = s[*i];
		*i += 1;
		t++;
	}
	mem[t] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (mem);
}
