
#include "libft.h"

int		ft_nbrlenbase(long int n, int base)
{
	int len;

	len = 0 + !n;
	while (n)
	{
		n = n / base;
		len++;
	}
	return (len);
}
