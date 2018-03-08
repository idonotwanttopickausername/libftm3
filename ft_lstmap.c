/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:58:27 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/07 22:12:28 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	l = f(lst);
	if (lst->next)
		ft_lstmap(lst->next, f);
	return (l);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	l = f(lst);
	if (!l)
		return (NULL);
	if (lst->next)
		ft_lstmap(lst->next, f);
	return (l);
}
*/
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*l;

	if (!lst)
		return (NULL);
	l = f(lst);
	new = l;
	while (lst->next)
	{
		lst = lst->next;
		if (!(l->next = f(lst)))
		{
			free(l->next);
			return (NULL);
		}
		l = l->next;
	}
	return (new);
}
