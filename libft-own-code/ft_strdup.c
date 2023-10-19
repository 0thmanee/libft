#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int	 	len;
	int	 	i;

	len = ft_strlen(s);
	i = 0;
	d = (char*)malloc((len + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}