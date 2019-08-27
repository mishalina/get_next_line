/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abooster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 15:22:17 by abooster          #+#    #+#             */
/*   Updated: 2019/04/25 17:28:53 by abooster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlink;

	if (content_size < 65535)
	{
		newlink = (t_list*)malloc(sizeof(t_list) * content_size);
		if (!newlink)
			return (NULL);
		if (!content)
		{
			newlink->content = NULL;
			newlink->content_size = 0;
		}
		else
		{
			if (!(newlink->content = malloc(content_size)))
				return (NULL);
			ft_memcpy((newlink->content), content, content_size);
			newlink->content_size = content_size;
		}
		newlink->next = NULL;
		return (newlink);
	}
	return (NULL);
}
