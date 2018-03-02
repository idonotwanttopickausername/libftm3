/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:19:09 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 17:50:50 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			x;
	unsigned char	*d;
	unsigned char	*s;

	x = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d <= s)
	{
		while (len > x)
		{
			d[x] = s[x];
			x++;
		}
	}
	else
		while ((int)(--len) >= 0)
			d[len] = s[len];
	return (dst);
}
