/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:52:03 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 19:10:33 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*s;
	char	*d;
	size_t	x;

	s = (char*)src;
	d = (char*)dst;
	x = 0;
	while (n > x)
	{
		if (s[x] == (char)c)
			return (&dst[x + 1]);
		d[x] = s[x];
		x++;
	}
	return (NULL);
}
