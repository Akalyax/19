/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:51:38 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 15:46:36 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	q;
	unsigned int	l;

	q = 0;
	l = 0;
	while (dest[l] != 0)
	{
		l++;
	}
	while (src[q] != 0 && l < size - 1)
	{
		dest[l] = src[q];
		q++;
		l++;
	}
	dest[l] = '\0';
	return (l);
}
