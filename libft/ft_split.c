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
	int		k;
	int		len;
	char	*substr;

	k = *i;
	len = 0;
	while (s[k] != c)
	{
		len++;
		k++;
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

static void	free_memory(char **strings, int j)
{
	int	i;

	i = 0;
	while (i <= j)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

char **ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;
	int		count;
	int 	isubstr;

	if (!s)
		return (NULL);
	count = count_strings(s, c);
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	j = 0;
	isubstr = 1;
	while (s[i])
	{
		if (s[i] != c && isubstr)
		{
			strings[j] = copysubstr(s, &i, c);
			if (!strings[j])
				{
					free_memory(strings, j);
					return (NULL);
				}
			j++;
			isubstr = 0;
		}
		if (s[i] == c)
			isubstr = 1;
		i++;
	}
	strings[j] = 0;
	return (strings);
}
#include <stdio.h>
int main(int ac, char *av[])
{
    if (ac < 2) {
        printf("Usage: %s <string>\n", av[0]);
        return 1;
    }
	int i = 0;
    char **split_result = ft_split(av[1], 'v');
	while (split_result[i]) {
		printf("%s\n", split_result[i]);
		i++;
	}

    return 0;
}