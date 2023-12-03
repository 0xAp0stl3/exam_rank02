#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ')
			{
				while (av[1][i + 1] == ' ')
					i++;
			}
			if (av[1][i + 1] == '\0')
			{
				if (av[1][i] == ' ')
					break ;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
