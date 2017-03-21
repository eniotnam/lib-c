
#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*tmp;
	int		a;
	int		b;

	if (!s2[0])
		return (&(((char*)s1)[0]));
	if (!s1[0] && s2[0])
		return (0);
	a = 0;
	b = 0;
	tmp = (char*)s1;
	while (tmp[a] != '\0')
	{
		if (tmp[a] == s2[b])
			b++;
		else
			b = 0;
		a++;
		if (s2[b] == '\0')
			return (&(tmp[a - b]));
	}
	return (0);
}
