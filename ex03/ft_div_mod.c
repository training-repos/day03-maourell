void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a != 0 || b != 0)
	{
		*mod = a % b;
		*div = a / b;
	}
}
