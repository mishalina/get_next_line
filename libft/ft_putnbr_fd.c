/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 13:55:47 by abooster          #+#    #+#             */
/*   Updated: 2019/04/24 16:06:08 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;
	char			c;

	if (fd >= 0)
	{
		if (n < 0)
		{
			res = -n;
			ft_putchar_fd('-', fd);
		}
		else
			res = n;
		if (res < 10)
		{
			c = res + '0';
			ft_putchar_fd(c, fd);
		}
		if (res >= 10)
		{
			ft_putnbr_fd(res / 10, fd);
			ft_putnbr_fd(res % 10, fd);
		}
	}
}
