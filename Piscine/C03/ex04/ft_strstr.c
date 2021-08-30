/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:51:12 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 18:56:59 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	b;
	int	c;

	c = 0;
	b = 0;
	while (to_find[c] != 0)
		c++;
	if (c == 0)
		return (str);
	while (*str != 0)
	{
		b = 0;
		while (*str == to_find[b])
		{
			if (b++ == c)
			{
				str -= --c;
				return (str);
			}
			str++;
		}
		if (b == 0)
			str++;
	}
	return (0);
}
