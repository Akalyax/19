/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <sbaeyens@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:27:52 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/31 13:34:00 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;

	tab = NULL;
	if (min >= max)
		return (tab);
	range = max - min;
	tab = malloc(sizeof(int) * range);
	if (tab == NULL)
		return (0);
	range = 0;
	while (min < max)
		tab[range++] = min++;
	return (tab);
}
