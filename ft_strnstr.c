/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:41:16 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/06 21:47:55 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;

	x = 0;
	if (needle[x] == '\0')
		return ((char*)haystack);
	while (*haystack && len)
	{
		if (*haystack == needle[x])
			x++;
		else
			x = 0;
		if (needle[x] == '\0')
			return ((char*)(haystack - x + 1));
		haystack++;
		len--;
	}
	return (NULL);
}
