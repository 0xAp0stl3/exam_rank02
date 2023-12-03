#include <unistd.h>

int	unio(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (len > i)
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (unio(av[1], av[1][i], i) == 0)
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if ((unio(av[1], av[2][j], i) == 0) && (unio(av[2], av[2][j], j) == 0))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

