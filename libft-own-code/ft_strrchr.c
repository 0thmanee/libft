#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;
	char	c2;
	int		i;

	s2 = NULL;
	c2 = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			s2 = ((char *)(s + i));
		i++;
	}
	if (s[i] == c2)
		s2 = ((char *)(s + i));
	return (s2);
}