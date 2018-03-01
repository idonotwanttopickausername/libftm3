/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:41:16 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 18:11:26 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	char	*h;

	x = 0;
	h = (char*)haystack;
	if (!needle[x])
		return (h);
	while (h[x] && x < len)
	{
		y = 0;
		while (h[x + y] == needle[y])
			y++;
		x++;
		if (!needle[y])
			return (&h[x - y]);
	}
	return (NULL);
}
