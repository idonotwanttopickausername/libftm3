/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:58:09 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 15:20:46 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*p1;
	unsigned char	*p2;

	x = 0;
	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	while (x < n)
	{
		if (p1[x] != p2[x])
			return ((p1[x] - p2[x]));
		x++;
	}
	return (0);
}
