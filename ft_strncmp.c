/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:03:18 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/28 20:41:56 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t x;

	x = 0;
	while ((s1[x] == s2[x]) && s1[x] && s2[x] && x < n)
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
