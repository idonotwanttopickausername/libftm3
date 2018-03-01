/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:15:58 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 17:24:34 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	l = NULL;
	l = malloc(sizeof(t_list));
	if (l)
	{
		l->content = (void*)content;
		if (!content)
			l->content_size = 0;
		else
			l->content_size = content_size;
		l->next = NULL;
	}
	return (l);
}
