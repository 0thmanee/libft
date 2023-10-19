#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;
	int		i;

	c2 = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c2)
		return ((char *)(s + i));
	return (NULL);
}