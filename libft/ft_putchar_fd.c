/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 13:48:39 by abooster          #+#    #+#             */
/*   Updated: 2019/04/24 16:09:00 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	ch[2];

	if (fd >= 0)
	{
		if (c >= 0)
			write(fd, &c, 1);
		else
		{
			ch[0] = (3 << 6) + ((unsigned char)c >> 6);
			ch[1] = (1 << 7) + ((unsigned char)c & 63);
			write(fd, ch, 2);
		}
	}
}
