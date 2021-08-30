/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:18:58 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 16:24:05 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_str_swap(char **ar1, char **ar2)
{
	char	*s3;

	s3 = *ar1;
	*ar1 = *ar2;
	*ar2 = s3;
}

void	ft_string(char *arg)
{
	int	o;

	o = 0;
	while (arg[o])
	{
		ft_putchar(arg[o++]);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	ret;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (argv[j])
		{
			ret = ft_strcmp(argv[i], argv[j]);
			if (ret > 0)
				ft_str_swap(&argv[i], &argv[j]);
			j++;
		}
		ft_string(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
