/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:51:25 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/07 15:52:14 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_a(const char *s, char c)
{
	int		n;
	int		m;
	int		x;

	m = 0;
	n = 0;
	x = 0;
	while (s[x] != '\0')
	{
		if (m == 1 && s[x] == c)
			m = 0;
		if (m == 0 && s[x] != c)
		{
			m = 1;
			n++;
		}
		x++;
	}
	return (n);
}

static int		len_b(const char *s, char c)
{
	int		n;

	n = 0;
	while (*s != c && *s)
	{
		s++;
		n++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		n;
	int		a;

	a = 0;
	n = len_a((const char *)s, c);
	res = (char **)malloc(sizeof(*res) * (len_a((const char *)s, c) + 1));
	if (!res)
		return (NULL);
	while (n--)
	{
		while (*s == c && *s)
			s++;
		res[a] = ft_strsub((const char *)s, 0, len_b((const char *)s, c));
		if (!res[a])
			return (NULL);
		s = s + len_b(s, c);
		a++;
	}
	res[a] = NULL;
	return (res);
}
