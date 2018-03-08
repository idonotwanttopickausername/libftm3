/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:03:28 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/08 14:43:54 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		l;

	if (s1 && s2)
	{
		l = ft_strlen(s1) + ft_strlen(s2);
		res = (char *)malloc(sizeof(char) * (l + 1));
		if (res)
		{
			ft_strcpy(res, s1);
			ft_strcat(res, s2);
			return (res);
		}
	}
	return (NULL);
}
