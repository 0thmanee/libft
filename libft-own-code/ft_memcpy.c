#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t  i;
	char	*src2;
	char	*dest2;

	i = 0;
	src2 = (char*)src;
	dest2 = (char*)dest;
	if (src == NULL && dest == NULL)
		return (0);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
	const char tab[] = "Hello";
	char tab2[5];
	int i = 0;
	ft_memcpy(tab2, tab, 5);
	while (i < 5)
	{
		printf("%c %c\n", tab[i], tab2[i]);
		i++;
	}
}