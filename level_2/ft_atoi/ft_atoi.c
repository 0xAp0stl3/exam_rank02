int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign* *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result * sign;
	return (result);
}
