/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:31:43 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 16:30:12 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		x;
	char	*tab;

	x = 0;
	tab = NULL;
	while (s[x])
		x++;
	tab = malloc(sizeof(char) * x);
	if (!tab)
		return (0);
	x = 0;
	while (s[x])
	{
		tab[x] = s[x];
		x++;
	}
	return (tab);
}
