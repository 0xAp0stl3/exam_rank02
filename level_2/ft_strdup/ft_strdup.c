#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i = 0;

	while(src[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!dest)
		return (NULL);
	while(src[i])
	{
		dest[i] = src[i]
		i++;
	}
	dest[i] = '\0';
	return (dest);
}