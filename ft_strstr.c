/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:58:11 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 18:01:59 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		x;
	int		y;
	char	*h;

	x = 0;
	h = (char*)haystack;
	if (!needle[x])
		return (h);
	while (h[x])
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
