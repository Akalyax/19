/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:08:06 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 18:22:31 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;

	tab = NULL;
	if (min >= max)
		return (0);
	range = max - min;
	tab = malloc(sizeof(int) * range);
	if (tab == NULL)
		return (0);
	range = 0;
	while (min < max)
		tab[range++] = min++;
	return (tab);
}
