/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:47:12 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 20:27:50 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while (str[z] == '\n' || str[z] == ' ' || str[z] == '\v'
		|| str[z] == '\t' || str[z] == '\f' || str[z] == '\r')
		z++;
	if (str[z] == '-')
		y = 1;
	if (str[z] == '+' || str[z] == '-')
		z++;
	while (str[z] >= '0' && str[z] <= '9')
	{
		x = x * 10;
		x = x + (str[z] - '0');
		z++;
	}
	if (y == 1)
		return (-x);
	else
		return (x);
}
