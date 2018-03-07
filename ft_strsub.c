/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:54:07 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 23:03:09 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		x;

	x = 0;
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	while (--len)
	{
		res[x] = s[start + x];
		x++;
	}
	return (res);
}
