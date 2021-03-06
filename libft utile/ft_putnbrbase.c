
#include "libft.h"

void	ft_putnbrbase(long int n, char *alphabet, int widht)
{
	int base;

	widht -= ft_nbrlenbase(n, ft_strlen(alphabet));
	while (widht-- > 0)
		write(1, "0", 1);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	base = ft_strlen(alphabet);
	if (n >= base)
		ft_putnbrbase(n / base, alphabet, 0);
	write(1, &(alphabet[n % base]), 1);
}
