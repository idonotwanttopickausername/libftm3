/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 20:13:18 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/06 19:47:07 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	char	*dst;

	x = 0;
	while (s1[x] != '\0')
		x++;
	dst = (char*)malloc(x + 1);
	if (dst == NULL)
		return (NULL);
	x = -1;
	while (s1[++x] != '\0')
		dst[x] = s1[x];
	dst[x] = '\0';
	return (dst);
}
