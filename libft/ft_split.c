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

static size_t	words_counts(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		is_word;

	is_word = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_word = 0;
		else if (!is_word)
		{
			count++;
			is_word = 1;
		}
		i++;
	}
	return (count);
}

static size_t	next_len(char const *s, char c)
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
	char	*p;
	size_t	next_lens;

	while (**s == c && **s)
		(*s)++;
	next_lens = next_len(*s, c);
	p = (char *) malloc (sizeof (char) * (next_lens + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < next_lens)
	{
		p[i] = **s;
		i++;
		(*s)++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**p;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	n_words = words_counts(s, c);
	p = (char **) malloc (sizeof(char *) * (n_words + 1));
	if (!p)
		return (NULL);
	while (i < n_words)
	{
		*(p + i) = next_word(&s, c);
		if (!p[i])
		{
			while (i > 0)
			{
				free(p[--i]);
			}
			free (p);
			return (NULL);
		}
		i++;
	}
	p[i] = NULL;
	return (p);
}

// int main()
// {
// 	int i = 0;
// 	char *s = "1";
//  	char **result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
// 	while (result[i]) {
// 		printf("%s:", result[i]);
// 		i++;
// 	}
// 	return 0;
// }	