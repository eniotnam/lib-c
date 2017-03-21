
#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int a;
	int len;

	a = 0;
	len = ft_strlen(s1);
	while (s2[a])
	{
		s1[len + a] = s2[a];
		a++;
	}
	s1[len + a] = 0;
	return (s1);
}
