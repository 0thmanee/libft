#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *s)
{
    
    int i = 0;
	if (*s == '\0')
		{
			printf("yess");
			return ;
		}
    if (s != NULL)
	{
		printf("(null)");
		return ;
	}
        
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int main() {
    // Write C code here
    ft_putstr((char *)NULL);


    return 0;
}