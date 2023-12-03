#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

void	ft_print_first(char *str, int i)
{
	while (str[i] && !is_space(str[i]))
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	rostring(char *str)
{
	int	i;
	int	start = 0;

	while (str[start] && is_space(str[start]))
		start++;
	i = start;
	while (str[i] && !is_space(str[i]))
		i++;
	while (str[i])
	{
		if (str[i] && !is_space(str[i]) && is_space(str[i - 1]))
		{
			while (str[i] && !is_space(str[i]))
			{
				ft_putchar(str[i]);
				i++;
			}
			ft_putchar(' ');
		}
		i++;
	}
	ft_print_first(str, start);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	ft_putchar('\n');
	return (0);
}