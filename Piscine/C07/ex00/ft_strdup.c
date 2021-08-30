/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeyens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:42:54 by sbaeyens          #+#    #+#             */
/*   Updated: 2021/08/16 18:22:10 by sbaeyens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	char	*ret;

	i = 0;
	ret = NULL;
	while (src[i])
		i++;
	ret = malloc(sizeof(char) * i);
	if (ret == NULL)
		exit(0);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	return (ret);
}
