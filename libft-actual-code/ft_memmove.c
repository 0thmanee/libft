/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:44:31 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/01 15:44:35 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*src2;
	char	*dest2;

	src2 = (char *)src;
	dest2 = (char *)dest;
	if (dest > src)
	{
		while (len > 0)
		{
			dest2[len - 1] = src2[len - 1];
			len--;
		}
	}
	else
		memcpy(dest, src, len);
	return (dest);
}
