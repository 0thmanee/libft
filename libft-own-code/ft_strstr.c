#include "libft.h"

char	*ft_strstr(const char *bigstr, const char *littlestr)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (littlestr[i] == '\0')
		return ((char*)bigstr);
	while (bigstr[i] != '\0')
	{
		j = 0;
		while (littlestr[j] != '\0' && bigstr[i + j] == littlestr[j])
		{
			j++;
		}
		if (littlestr[j] == '\0')
			return ((char*)(bigstr + i));
		i++;
	}
	return (NULL);
}