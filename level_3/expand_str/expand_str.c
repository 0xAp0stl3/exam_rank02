#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	fl;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				fl = 1;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				if (fl)
					write(1, " ", 1);
				fl = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}