#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	i = 0;
	int	step = 1;
	int	n = end - start;

	if (n < 0)
		(n *= -1);
	n++;
	res = malloc(sizeof(int) * n);
	while (res)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			res[i] = end;
			end = end + start;
			i++;
		}
	}
	return (res);
}
