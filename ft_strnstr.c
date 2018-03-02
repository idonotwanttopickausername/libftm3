/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:41:16 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 19:52:12 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	m;
	char	*h;

	x = 0;
	h = (char*)haystack;
	if (!needle[x])
		return (h);
	while (h[x] && x < len)
	{
		if (h[x] == needle[0])
		{
			y = -1;
			m = 1;
			while (needle[++y])
				if (needle[y] != h[x + y])
					m = 0;
			if (m)
				return (&h[x]);
		}
		x++;
	}
	return (NULL);
}
