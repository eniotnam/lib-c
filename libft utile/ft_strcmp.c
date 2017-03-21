
int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
