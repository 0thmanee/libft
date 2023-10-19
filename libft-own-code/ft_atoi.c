#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (sign * result);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("21223"));
	printf("%d\n", atoi("21223"));
}