/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:29:38 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 18:10:01 by sbaeyens         ###   ########.fr       */
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

	ar = 1;
	while (ar < argc)
	{
		ch = 0;
		while (argv[ar][ch] != 0)
			ft_putchar(argv[ar][ch++]);
		ar++;
		ft_putchar('\n');
	}
}
