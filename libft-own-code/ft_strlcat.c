#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t len_src;
	size_t len_dest;
	size_t i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);

	if (dstsize <= len_dest)
		return dstsize + len_src;

	i = 0;
	while (src[i] != '\0' && len_dest + i < dstsize - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';

	return (len_src + len_dest);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "World";
	char *s2 = malloc(11);
	strcpy(s2, "Hello ");
	size_t result = ft_strlcat(s2, s1, 5);
	printf("%s\n", s2);
	printf("Total length: %zu\n", result);
	return 0;
}
