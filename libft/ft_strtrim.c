/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 13:46:48 by abooster          #+#    #+#             */
/*   Updated: 2019/04/22 22:04:41 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	size_t		len;

	start = 0;
	if (s == NULL)
		return (NULL);
	end = ft_strlen(s);
	if (s)
	{
		while (s[start] != '\0' && (s[start] == ' ' ||
					s[start] == '\n' || s[start] == '\t'))
			start++;
		if (s[start] == '\0')
			return (ft_strnew(0));
		while (start <= end && (s[end - 1] == ' ' ||
					s[end - 1] == '\n' || s[end - 1] == '\t'))
			end--;
		len = end - start;
		if (start > end)
			return (ft_strnew(0));
		else
			return (ft_strsub(s, (unsigned int)start, len));
	}
	return (NULL);
}
