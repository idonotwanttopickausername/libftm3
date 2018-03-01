/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:03:28 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:10:12 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		x;
	int		l;
	int		y;

	x = 0;
	y = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	res = (char*)malloc(sizeof(char) * l);
	if (!res)
		return (NULL);
	while (s1[x])
	{
		res[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		res[x] = s2[y];
		x++;
		y++;
	}
	res[x] = '\0';
	return (res);
}
