/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:08:04 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 14:37:01 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	t;
	int	wait;

	t = 1;
	while (t < size)
	{
		if (tab[t - 1] > tab[t])
		{
			wait = tab[t];
			tab[t] = tab[t - 1];
			tab[t - 1] = wait;
			t = 1;
		}
		else
			t++;
	}
}

char	*ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	vala;
	int	valb;

	a = 0;
	vala = 0;
	valb = 0;
	while (s1[a] != 0)
	{
		vala = vala + (s1[a] + 0);
		a++;
	}
	a = 0;
	while (s2[a] != 0)
	{
		valb = valb + (s2[a] + 0);
		a++;
	}
	if (vala < valb)
		return (s2);
	else if (vala > valb)
		return (s1);
	else
	return (s1);
}

int	main(int argv, char **argc)
{
	while()
}
