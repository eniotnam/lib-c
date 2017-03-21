
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dst[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dst[a] = '\0';
		a++;
	}
	return (dst);
}
