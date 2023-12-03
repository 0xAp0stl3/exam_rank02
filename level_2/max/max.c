#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[0];
	while (len--)
	{
		if (tab[len] > max)
			max = tab[len];
	}
	return (max);
}

/*int	main()
{
	int	tab[] = {1, 2 , 54, 62, 42, 89};
	unsigned int len = sizeof(tab)/sizeof(tab[0]);

	int maxe = max(tab, len);

	printf("%d", maxe);
	return (0);
}*/
