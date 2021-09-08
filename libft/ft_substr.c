/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:39:53 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 16:32:28 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	char	*tab;
	size_t	l;

	l = -1;
	tab = NULL;
	if (len == 0)
		return (0);
	tab = malloc(len + 1);
	while (++l < len)
		tab[l] = c[start + l];
	return (tab);
}
