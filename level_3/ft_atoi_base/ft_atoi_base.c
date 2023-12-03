char	to_mini(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	get_digit(char c, int digit_base)
{
	int	max_digit;
	if (digit_base <= 10)
		max_digit = digit_base + '0';
	else
		max_digit = digit_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while ((digit = get_digit(to_mini(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		++str;
	}
	return (res);
}