/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:21:42 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 20:44:46 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		x;
	int		l;

	x = 0;
	l = ft_strlen(s);
	res = (char*)malloc(sizeof(char) * l);
	if (!res)
		return (NULL);
	while (s[x])
	{
		res[x] = f(s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}
