/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:53:11 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:08:50 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	v;
	size_t			x;
	char			*a;

	x = 0;
	a = (char *)(b);
	v = (unsigned char)(c);
	while (len > x)
	{
		*(a + x) = v;
		x++;
	}
	return (b);
}
