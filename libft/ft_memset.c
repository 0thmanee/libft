/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:39:51 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/01 14:39:54 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*ptr2;

	ptr2 = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		ptr2[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

/* int main()
{
	int i;
	ft_memset((char *)&i, 199,1);
	ft_memset((char *)&i+1 ,250, 1);
	ft_memset((char *)&i+2, 255,1);
	ft_memset((char *)&i+3, 255,1);
}
 */
