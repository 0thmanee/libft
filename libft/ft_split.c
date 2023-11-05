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

static int	count_strings(char const *s, char c)
{
	int	i;
	int	count;
	int isubstr;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	isubstr = 1;
	if (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && isubstr)
		{
			count++;
			isubstr = 0;
		}
		if (s[i] == c)
			isubstr = 1;
		i++;
	}
	return (count);
}

static char	*copysubstr(const char *s, int *i, char c)
{
	int		j;
	int		len;
	char	*substr;

	j = *i;
	len = 0;
	while (s[j] != c && s[j])
	{
		len++;
		j++;
	}
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	j = 0;
	while (s[*i] != c && s[*i])
	{
		substr[j] = s[*i];
		j++;
		(*i)++;
	}
	substr[j] = '\0';
	return (substr);
}

static char	**free_memory(char **strings, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;
	int 	isubstr;

	strings = (char **)malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = -1;
	j = 0;
	isubstr = 1;
	while (s[++i])
	{
		if (s[i] != c && isubstr)
		{
			strings[j] = copysubstr(s, &i, c);
			if (!strings[j])
				return (free_memory(strings, j));
			j++;
			isubstr = 0;
		}
		if (s[i] == c)
			isubstr = 1;
	}
	strings[j] = 0;
	return (strings);
}
#include <stdio.h>
int main()
{
	int i = 0;
	char *s = "                  olol";
 	char **result = ft_split(s, ' ');
	while (result[i]) {
		printf("%s", result[i]);
		i++;
	}
	return 0;
}