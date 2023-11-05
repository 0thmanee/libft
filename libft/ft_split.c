/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:32:08 by obouchta          #+#    #+#             */
/*   Updated: 2023/11/04 14:32:09 by obouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			if (i == 0 || s[i - 1] == c)
				count++;
			i++;
		}
	}
	return (count);
}

static char	**free_memory(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;

	i = 0;
	strings = (char **)malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		while (s[j] && s[j] != c)
			j++;
		if (j != 0)
		{
			strings[i] = ft_substr(s, 0, j);
			if (strings[i] == NULL)
				return (free_memory(strings));
			i++;
		}
		s = s + j;
	}
	return (strings);
}