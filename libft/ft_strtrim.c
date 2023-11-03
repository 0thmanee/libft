/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:55:33 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/03 18:55:35 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calclen(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] == set[i])
		i++;
	if ()
}
char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	trimmed;

	if (!s1 || !set)
		return (NULL);
	trimmed = (char *)malloc()
}