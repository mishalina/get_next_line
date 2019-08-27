/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:19:20 by abooster          #+#    #+#             */
/*   Updated: 2019/05/05 13:09:23 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			main(void)
{
	int		fd;
	int		ret;
	char	*one_line;

	fd = open("tests/the_lord_of_the_ring.txt", O_RDONLY);
	while ((ret = get_next_line(fd, &one_line)))
	{
		if (ret > 0)
		{
			printf("|%s|\n", one_line);
			free(one_line);
		}
		if (ret == -1)
		{
			printf("File does not exist");
			break ;
		}
	}
}
