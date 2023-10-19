
char	*ft_strstr(const char *bigstr, const char *littlestr, size_t n)
{
	ize_t	i;
	size_t	j;

	i = 0;
	if (littlestr[i] == '\0')
		return ((char*)bigstr);
	if (n == 0)
		return (NULL);
	while (bigstr[i] != '\0' && i < n)
	{
		j = 0;
		while (littlestr[j] != '\0' && bigstr[i + j] == littlestr[j] && (i + j) < n)
		{
			j++;
		}
		if (littlestr[j] == '\0')
			return ((char*)(bigstr + i));
		i++;
	}
	return (NULL);
}