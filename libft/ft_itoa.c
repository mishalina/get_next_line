/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 12:25:24 by abooster          #+#    #+#             */
/*   Updated: 2019/04/20 19:38:28 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		nmb;
	int		sign;
	char	*str;

	nmb = ft_take_digits(n);
	sign = (n < 0) ? 1 : 0;
	if (!(str = ft_strnew((size_t)(nmb + sign))))
		return (NULL);
	if (sign)
		str[0] = '-';
	else if (n > 0)
		nmb--;
	else
		str[0] = '0';
	while (n)
	{
		if (n > 0)
			str[nmb] = '0' + (n % 10);
		else
			str[nmb] = '0' + -(n % 10);
		n = n / 10;
		nmb--;
	}
	return (str);
}
