/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:14:43 by abooster          #+#    #+#             */
/*   Updated: 2019/04/24 17:26:38 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			a;
	char		**arr;

	a = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(char*) * (ft_countwrd(s, c) + 1))))
		return (NULL);
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (a < ft_countwrd(s, c) && s[i])
	{
		if (!(arr[a] = ft_strmem(s, c, &i)))
		{
			ft_freemem(arr);
			return (NULL);
		}
		a++;
	}
	arr[a] = NULL;
	return (arr);
}
