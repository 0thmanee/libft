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

static char	*min_or_0(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

static int	calc_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
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
	char	*nbr;
	int		len;

	if (n == 0 || n == -2147483648)
		return (min_or_0(n));
	len = calc_digits(n);
	nbr = (char *)malloc(len + 1);
	if (!nbr)
		return (NULL);
	nbr[0] = '+';
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
	}
	nbr[len] = '\0';
	while (--len >= 0)
	{
		if (len == 0 && nbr[len] == '-')
			break ;
		nbr[len] = (n % 10) + 48;
		n /= 10;
	}
	return (nbr);
}

// #include <string.h>
// int main()
// {
// 	int i = 0;
// 	char *str;
// 	str = ft_itoa(42);
// 	if (!strcmp(ft_itoa(42), "40"))
// 		printf("Success!!!!\n");
// 	else
// 		printf("\033[1;31mError!!!\033[0m\n");
// }
