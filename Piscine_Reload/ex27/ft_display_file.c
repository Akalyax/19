/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <sbaeyens@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:06:11 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/31 14:12:37 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_file(int fd)
{
	char	buf;

	while (read(fd, &buf, 1) != 0)
		ft_putchar(buf);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		else
			ft_putstr("File name missing.\n");
		return (-1);
	}
	fd = open (argv[1], O_RDONLY);
	ft_file(fd);
	close(fd);
	return (0);
}
