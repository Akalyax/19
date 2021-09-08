/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:18:37 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/09/04 12:28:01 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_itoa(int n)
{
	int		x;
	int		neg;
	int		t;
	char	*tab;
	int		v;

	v = 0;
	t = 1;
	neg = 1;
	if (n < 0)
		neg = -neg;
	x = neg * n;
	while (x > 9)
	{
		x = x / 10;
		t++;
	}
	n = n * neg;
	tab = malloc(t + 1);
	while (v < t)
	{
		tab[v++] = n % 10;
		n = n / 10;
	}
	return (tab);
}
int	main(int x, char **v)
{
	(void)x;
	printf("%s\n", ft_itoa(atoi(v[1])));
}
