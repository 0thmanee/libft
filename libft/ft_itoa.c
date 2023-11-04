/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:40:01 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/04 16:40:04 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

static int	calcdigits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*nbr;
	int		len;

	if (n == 0 || n == -2147483648)
		return (check(n));
	len = calcdigits(n);
	nbr = (char *)malloc(len + 1);
	if (!nbr)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		nbr[i++] = '-';
		n *= -1;
	}
	nbr[len] = '\0';
	len--;
	while (len >= 0)
	{
		nbr[len] = (n % 10) + 48;
		len--;
		n = n / 10;
	}
    return (nbr);
}