/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:33:32 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 17:47:47 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	x = ft_strlen(dst);
	y = 0;
	while (y < dstsize)
		dst[x++] = src[y++];
	dst[x] = '\0';
	return ((size_t)ft_strlen(dst) + (size_t)ft_strlen(src));
}
