#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res = 0;

	while (*str)
		res = res * 10 + *str++ - '0';
	return (res);
}

int	prime(int nbr)
{
	int	i = 2;

	if (nbr <= 1)
		return (0);
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnbr(int nbr)
{
	if (nbr > 9)
		putnbr(nbr / 10);
	char digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	nbr = ft_atoi(av[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (prime(nbr))
				sum += nbr;
			nbr--;
		}
		putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
