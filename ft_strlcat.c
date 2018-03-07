/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:33:32 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/06 21:27:51 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		x;
	size_t		dlen;
	size_t		slen;

	x = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while ((dst[x] != '\0') && x < (dstsize - 1))
		x++;
	while (*src && x < (dstsize - 1))
	{
		dst[x] = *src;
		x++;
		src++;
	}
	dst[x] = '\0';
	return (slen + dlen);
}
