int	ft_atoi(char *str)
{
	int		i;
	int		m;
	int		n;

	i = 0;
	m = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' \
			|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		{
			n = 1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		m = m * 10;
		m = m + str[i] - '0';
		i++;
	}
	if (n)
		return(-m);
	return (m);
}
