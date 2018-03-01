/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:51:06 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 17:52:31 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;
	char *str;

	x = 0;
	str = (char*)s;
	while (str[x])
	{
		if (str[x] == (char)c)
			return (&str[x]);
		x++;
	}
	if (str[x] == (char)c)
		return (&str[x]);
	return (NULL);
}
