
int		ft_tabstrlen(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
