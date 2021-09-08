/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <sbaeyens@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:15:13 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/31 13:27:36 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*ret;

	x = 0;
	ret = NULL;
	while (src[x] != '\0')
		x++;
	ret = malloc(sizeof(char) * x);
	if (ret == NULL)
		return (0);
	x = 0;
	while (src[x] != '\0')
	{
		ret[x] = src[x];
		x++;
	}
	ret[x] = '\0';
	return (ret);
}
