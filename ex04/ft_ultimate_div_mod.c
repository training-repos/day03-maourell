void	ft_ultimate_div_mod(int *a, int *b)
{
	int		Intermed;

	if (*a != 0 || *b != 0)
	{
		Intermed = *a;
		*a = *a / *b;
		*b = Intermed % *b;
	}
}
