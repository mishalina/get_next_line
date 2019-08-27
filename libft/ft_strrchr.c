/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:05:45 by abooster          #+#    #+#             */
/*   Updated: 2019/04/22 19:51:26 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char *last;

	last = 0;
	while (*string != '\0')
	{
		if (*string == symbol)
			last = (char*)string;
		string++;
	}
	if (last != '\0')
		return (last);
	if (symbol == '\0')
		return ((char*)string);
	return (0);
}
