
char	*ft_strcpy(char *dst, const char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (dst);
}
