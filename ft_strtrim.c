/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:11:42 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/08 14:48:22 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		l;
	int		x;
	int		y;

	if (s)
	{
		l = ft_strlen(s);
		while (s[l - 1] == ' ' || s[l - 1] == '\t' || s[l - 1] == '\n')
			l--;
		x = -1;
		while (s[++x] == ' ' || s[x] == '\n' || s[x] == '\t')
			l--;
		if (l < 0)
			l = 0;
		res = ft_strnew(l);
		if (!res)
			return (NULL);
		y = -1;
		while (l > ++y)
			res[y] = s[x + y];
		res[y] = '\0';
		return (res);
	}
	return (NULL);
}
