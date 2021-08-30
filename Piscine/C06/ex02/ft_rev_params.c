/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:26:08 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 18:10:25 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	ar;
	int	ch;

	ar = argc - 1;
	while (0 < ar)
	{
		ch = 0;
		while (argv[ar][ch] != 0)
			ft_putchar(argv[ar][ch++]);
		ar--;
		ft_putchar('\n');
	}
}
