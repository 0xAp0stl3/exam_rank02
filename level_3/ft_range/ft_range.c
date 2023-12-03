#include <stdlib.h>

int     negative(int nbr)
{
        if (nbr < 0)
                return (-nbr);
        return (nbr);
}

int     *ft_range(int start, int end)
{
        int     i = 0;
        int     *result;
        int     neg;

        neg = negative(start - end);
        result = malloc(sizeof(int) * (neg + 1));
        if (!result)
                return (NULL);
        i = 0;
        while (start < end)
        {
                result[i] = start;
                start++;
                i++;
        }
        result[i] = start;
        while (start > end)
        {
                result[i] = start;
                start--;
                i++;
        }
        result[i] = start;
        return (result);
}
