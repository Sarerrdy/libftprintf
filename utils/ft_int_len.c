int	ft_int_len(int n)
{
	int	len;

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