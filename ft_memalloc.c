/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:46:03 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/02/27 19:34:33 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;
	size_t	x;
	char	*c;

	x = 0;
	m = malloc(sizeof(size_t) * size);
	if (m == NULL)
		return (NULL);
	c = (char*)m;
	while (size >= x)
		c[x++] = 0;
	return (m);
}
