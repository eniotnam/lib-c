
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		a;

	if (!s)
		return (0);
	if (!len)
		return ("");
	a = 0;
	str = malloc(len + start + 1);
	if (!str)
		return (0);
	while (len--)
	{
		str[a] = s[start + a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
