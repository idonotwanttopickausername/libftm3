/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:52:03 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/06 15:18:49 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			x;
	void			*z;

	z = NULL;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	x = 0;
	while (n > x)
	{
		if (s[x] == (unsigned char)c)
			return ((dst + x + 1));
		d[x] = s[x];
		x++;
	}
	return (z);
}
*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t	x;
	void	*z;

	z = NULL;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	x = 0;
	while (n > x)
	{
		d[x] = s[x];
		if (s[x] == (unsigned char)c)
			return ((dst + x + 1));
		x++;
	}
	return (z);
}
