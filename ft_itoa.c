/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 20:33:10 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 19:27:59 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	aux(int n, char *res)
{
	int	x;
	int	z;

	x = 0;
	if (n < 0)
	{
		res[x++] = '-';
		n *= -1;
	}
	z = n;
	while (z)
	{
		z /= 10;
		x++;
	}
	res[x--] = '\0';
	while (x >= 0)
	{
		res[x--] = (n % 10 + 48);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;

	if (n == -2147483648)
		return ("-2147483648");
	res = (char*)malloc(sizeof(char) * 12);
	if (!res)
		return (NULL);
	aux(n, res);
	return (res);
}
