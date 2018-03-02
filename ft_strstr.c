/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:58:11 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 19:51:44 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		x;
	int		y;
	char	*h;
	int		m;

	x = 0;
	h = (char*)haystack;
	if (!needle[x])
		return (h);
	while (h[x])
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
