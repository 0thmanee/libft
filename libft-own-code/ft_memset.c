#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*ptr2;

	ptr2 = (unsigned char*)ptr;
	i = 0;
	while (i < num)
	{
		ptr2[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
	char tab[5];
	char tab2[5];
	int i = 0;
	ft_memset(tab, -206, 5);
	memset(tab2, -206, 5);
	while (i < 5)
	{
		printf("%c %c\n", tab[i], tab2[i]);
		i++;
	}
}