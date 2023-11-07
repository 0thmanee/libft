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

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		is_subs;

	is_subs = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_subs = 0;
		else if (!is_subs)
		{
			count++;
			is_subs = 1;
		}
		i++;
	}
	return (count);
}

static size_t	calc_len(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count);
}

static char	*next_word(char const **s, char c)
{
	size_t	i;
	char	*strings;
	size_t	len;

	while (**s == c && **s)
		(*s)++;
	len = calc_len(*s, c);
	strings = (char *) malloc (sizeof (char) * (len + 1));
	if (!strings)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strings[i] = **s;
		i++;
		(*s)++;
	}
	strings[i] = '\0';
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	size_t	nbr_words;
	char	**strings;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	nbr_words = count_words(s, c);
	strings = (char **) malloc (sizeof(char *) * (nbr_words + 1));
	if (!strings)
		return (NULL);
	while (i < nbr_words)
	{
		*(strings + i) = next_word(&s, c);
		if (!strings[i])
		{
			while (i > 0)
				free(strings[--i]);
			free (strings);
			return (NULL);
		}
		i++;
	}
	strings[i] = NULL;
	return (strings);
}

int main()
{
	int i = 0;
	char *s = "1";
 	char **result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	while (result[i]) {
		printf("%s:", result[i]);
		i++;
	}
	return 0;
}	