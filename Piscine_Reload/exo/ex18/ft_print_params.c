/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <sbaeyens@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:45:37 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/31 12:51:20 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y])
			ft_putchar(argv[x][y++]);
		x++;
		ft_putchar('\n');
	}
}
