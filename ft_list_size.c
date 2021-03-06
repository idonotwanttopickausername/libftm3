/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:18:18 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 19:19:14 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*l;
	int		x;

	x = 0;
	l = begin_list;
	while (l)
	{
		l = l->next;
		x++;
	}
	return (x);
}
