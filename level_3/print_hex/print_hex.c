#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nbr = 0;

	while (*str)
	{
		nbr = nbr * 10;
		nbr = nbr + *str - '0';
		++str;
	}
	return (nbr);
}

void	print_hex(int nbr)
{
	char hex[] = "0123456789abcdef";

	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}