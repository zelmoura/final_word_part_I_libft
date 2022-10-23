int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		i++;
		return (i);
	}
	return (i);
}
