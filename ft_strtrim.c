/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:11:42 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 21:01:13 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		l;
	int		x;
	int		y;

	l = ft_strlen(s);
	x = 0;
	y = 0;
	res = (char*)malloc(sizeof(char) * l + 1);
	if (!res)
		return (NULL);
	while (s[x])
	{
		if (x == 0 || x == l - 1)
			if(s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
				x++;
		if (!s[x])
			break ;
		res[y] = s[x];
		y++;
		x++;
	}
	res[x] = '\0';
	return (res);
}
