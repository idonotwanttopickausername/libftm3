/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 20:33:10 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 22:44:40 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	aux(int n, char *res, size_t x, int m)
{
	while (n)
	{
		res[--x] = (n % 10 + 48);
		n /= 10;
	}
	if (m == 1)
		res[--x] = '-';
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	x;
	int		b;
	int		m;

	x = 0;
	m = 0;
	if (n < 0)
	{
		x++;
		n *= -1;
		m = 1;
	}
	b = n;
	while (b)
	{
		b /= 10;
		x++;
	}
	res = ft_strnew(x);
	if (res)
		aux(n, res, x, m);
	return (res);
}
