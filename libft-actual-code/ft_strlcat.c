/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:14:49 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/02 16:14:52 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t len_src;
	size_t len_dest;
	size_t i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);

	if (dstsize <= len_dest)
		return dstsize + len_src;

	i = 0;
	while (src[i] != '\0' && len_dest + i < dstsize - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';

	return (len_src + len_dest);
}