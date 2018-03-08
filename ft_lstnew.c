/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:15:58 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/07 21:55:51 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*l;

	l = (t_list *)malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	if (content)
		l->content = malloc(sizeof(content) * content_size);
	if ((!l->content) || (!content))
	{
		l->content = NULL;
		l->content_size = 0;
	}
	else
	{
		l->content = ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
	}
	l->next = NULL;
	return (l);
}
