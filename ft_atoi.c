/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:47:12 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 19:17:24 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int n;
	int x;
	int s;

	n = 0;
	x = 0;
	s = 0;
	while (str[x] == '\n' || str[x] == ' ' || str[x] == '\v' || str[x] == '\t'
			|| str[x] == '\f' || str[x] == '\r')
		x++;
	if (str[x] == '-')
		s = 1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= 48 && str[x] <= 57)
	{
		n *= 10;
		n += (str[x] - 48);
		x++;
	}
	if (s == 1)
		return (-n);
	return (n);
}