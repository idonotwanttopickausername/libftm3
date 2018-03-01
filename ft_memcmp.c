/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:58:09 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 17:56:10 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	x;
	char	*p1;
	char	*p2;

	x = 0;
	p1 = (char*)s1;
	p2 = (char*)s2;
	while (x < n)
	{
		if (p1[x] != p2[x])
			return (0);
		x++;
	}
	return ((int)(p1[x] - p2[x]));
}
