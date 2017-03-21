
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int a;

	a = 0;
	while ((s1[a] || s2[a]) && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
