/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:01:36 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/02 18:01:39 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	bytes;
	char	*str;

	bytes = count * size;
	str = (char *)malloc(bytes);
	if (!str)
		return (NULL);
	i = 0;
	while (i < bytes)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
