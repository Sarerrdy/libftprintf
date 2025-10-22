#include "printf.h"

size_t	ft_size_t_len(size_t n)
{
	size_t	len;

	if (n <= 0)
		len = 1;
	if (n > 0)
		len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}