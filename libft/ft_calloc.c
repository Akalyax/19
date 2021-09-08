/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:22:22 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/08 16:26:38 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;

	tab = NULL;
	tab = malloc(size * nmemb);
	if (!tab)
		return (0);
	while (nmemb-- > 0)
		tab[nmemb] = 0;
	return (tab);
}
