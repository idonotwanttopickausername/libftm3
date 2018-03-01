/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:31:00 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 18:11:27 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		x;
	int		l;

	x = 0;
	l = ft_strlen(s);
	res = (char*)malloc(sizeof(char) * l);
	while (s[x])
	{
		res[x] = f(x, s[x]);
		x++;
	}
	return (res);
}
