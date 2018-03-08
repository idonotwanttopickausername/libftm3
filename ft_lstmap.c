/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:58:27 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/08 10:27:17 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*l1;
	t_list		*l2;

	if (!lst)
		return (NULL);
	l2 = f(lst);
	l1 = l2;
	while (lst->next)
	{
		lst = lst->next;
		if (!(l2->next = f(lst)))
		{
			free(l2->next);
			return (NULL);
		}
		l2 = l2->next;
	}
	return (l1);
}
