/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 20:07:52 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 17:27:02 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	*str;

	str = (char*)s;
	x = ft_strlen(str) + 1;
	while (--x)
		if (str[x] == (char)c)
			return (&str[x]);
	return (NULL);
}
