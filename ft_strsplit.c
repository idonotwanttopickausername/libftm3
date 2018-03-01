/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:51:25 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 18:04:46 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		len_a(char const *s, char c)
{
	int n;
	int x;

	n = 1;
	x = 0;
	while (s[x])
	{
		if (s[x++] == c)
		{
			while (s[x] == c)
				x++;
			if (s[x])
			{
				while (s[x] != c && s[x])
					x++;
				n++;
			}
		}
		else
			x++;
	}
	return (n);
}

int		len_b(char const *s, char c)
{
	int n;
	int x;

	n = 1;
	x = 0;
	while (s[x] == c)
		x++;
	while (s[x] != c && s[x])
	{
		x++;
		n++;
	}
	return (n);
}

int		ft_workhorse(char *src, char **dst, char c, int x)
{
	int	a;
	int b;

	a = 0;
	while (src[x])
	{
		if (src[x++] == c)
		{
			while (src[x] == c)
				x++;
			if (src[x])
			{
				b = 0;
				dst[a] = (char*)malloc(len_b(src, c));
				while (src[x] != c && src[x])
					dst[a][b++] = src[x++];
				dst[a][b] = '\0';
				a++;
			}
		}
		else
			x++;
	}
	return (a);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		x;
	int		a;

	x = 0;
	a = 0;
	res = NULL;
	*res = (char*)malloc(len_a(s, c));
	a = ft_workhorse((char*)s, res, c, x);
	res[a] = (char*)malloc(1);
	res[a] = NULL;
	return (res);
}
