/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <sbaeyens@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:08:12 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/31 13:13:45 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_str_swap(char **s1, char **s2)
{
	char	*s3;

	s3 = *s1;
	*s1 = *s2;
	*s2 = s3;
}

void	ft_string(char *s)
{
	int	x;

	x = 0;
	while (s[x])
		ft_putchar(s[x++]);
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
