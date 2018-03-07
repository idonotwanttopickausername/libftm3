/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:34:33 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/06 15:19:48 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*s;
	unsigned char	*d;

	x = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	while (n > x)
	{
		d[x] = (unsigned char)s[x];
		x++;
	}
	return (dst);
}
