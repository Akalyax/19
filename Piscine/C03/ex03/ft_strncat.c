/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:50:41 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/11 08:50:45 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	q;
	int				l;

	q = 0;
	l = 0;
	while (dest[l] != 0)
	{
		l++;
	}
	while (src[q] != 0 && q < nb)
	{
		dest[l + q] = src[q];
		q++;
	}
	dest[l + q] = '\0';
	return (dest);
}
