#include "libft.h"

void	ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*src2;
	char		*dest2;
	unsigned char	c2;

	i = 0;
	src2 = (char*)src;
	src2 = (char*)src;
	c2 = (char*)c;
	while (i < n)
	{
		dest2[i] = src2[i];
		if (src2[i] == c2)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}