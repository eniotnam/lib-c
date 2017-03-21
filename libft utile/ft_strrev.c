
#include <stdlib.h>
#include "libft.h"

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	*new;

	len = ft_strlen(str);
	new = malloc(len);
	i = -1;
	while (++i < len)
		new[i] = str[len - i - 1];
	return (new);
}
