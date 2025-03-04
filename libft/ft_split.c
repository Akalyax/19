/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:11:34 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 20:33:16 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_check(char const *s, char c, int p, int m)
{
	int	y;
	int	x;
	int	i;

	i = 0;
	x = 0;
	y = 0;
	while (s[x])
	{
		while (s[x] == c && s[x] != '\0')
			x++;
		if (s[x] != '\0')
			y++;
		if (y == m && p == 1)
			return (x);
		while (s[x] != c && s[x] != '\0')
			if (s[x++] && y == m)
				i++;
		if (y == m)
			return (i);
	}
	return (y);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	char	**tab;
	int		i;
	int		v;
	int		y;

	y = 0;
	v = 0;
	x = 0;
	x = ft_check(s, c, 0, -1);
	tab = malloc(sizeof(char *) * x + 1);
	if (x == 0)
		return (0);
	while (y < x)
	{
		tab[y] = malloc(ft_check(s, c, 0, y + 1));
		i = ft_check(s, c, 1, y + 1);
		while (s[i] != c && s[i])
			tab[y][v++] = s[i++];
		tab[y][v] = '\0';
		y++;
		v = 0;
	}
	tab[y] = NULL;
	return (tab);
}
