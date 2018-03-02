/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:34:33 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 15:38:31 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;
	char	*s;
	char	*d;

	x = 0;
	s = (char*)src;
	d = (char*)dst;
	while (n > x)
	{
		d[x] = (char)s[x];
		x++;
	}
	return (dst);
}
