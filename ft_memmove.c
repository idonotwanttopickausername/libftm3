/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:19:09 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 15:48:46 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	x;
	char	*d;

	x = -1;
	d = dst;
	while (len > (size_t)(++x))
		d[x] = (char)(src + x);
	return (dst);
}
