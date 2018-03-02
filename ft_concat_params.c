/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoolsby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:28:34 by cgoolsby          #+#    #+#             */
/*   Updated: 2018/03/01 20:07:43 by cgoolsby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_counter(int argc, char **argv)
{
	int		x;
	int		y;
	int		size;

	x = 1;
	y = 0;
	size = 0;
	while (x < argc)
	{
		while (argv[x][y] != '\0')
			y++;
		size += y;
		y = 0;
		x++;
	}
	size += x;
	return (size);
}

char	*ft_writer(int x, int y, int argc, char **argv)
{
	char	*z;
	int		s;
	int		a;

	a = 0;
	s = ft_counter(argc, argv);
	z = (char*)malloc(sizeof(char) * s);
	while (x < argc)
	{
		while (argv[x][y] != '\0')
		{
			z[a] = argv[x][y];
			y++;
			a++;
		}
		if (x < argc - 1)
			z[a] = ('\n');
		a++;
		y = 0;
		x++;
	}
	return (z);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		x;
	int		y;
	char	*z;

	x = 1;
	y = 0;
	z = ft_writer(x, y, argc, argv);
	return (z);
}
