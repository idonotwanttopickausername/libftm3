/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:03:28 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/08 11:13:32 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		x;
	int		l;
	int		y;

	x = -1;
	y = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	res = (char*)malloc(sizeof(char) * l);
	if (res)
	{
		while (s1[++x])
			res[x] = s1[x];
		while (s2[y])
		{
			res[x] = s2[y];
			x++;
			y++;
		}
		res[x] = '\0';
		return (res);
	}
	return (NULL);
}
