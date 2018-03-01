/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:15:37 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/21 15:18:36 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int x;

	x = 0;
	while (s[x])
	{
		ft_putchar(s[x]);
		x++;
	}
}
