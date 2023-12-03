#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    do_op(char *res1, char ope, char *res2)
{
        int     first = atoi(res1);
        int     second = atoi(res2);
        int     result = 0;

        if (ope == '+')
                result = first + second;
        if (ope == '-')
                result = first - second;
        if (ope == '*')
                result = first * second;
        if (ope == '/')
                result = first / second;
        if (ope == '%')
                result = first % second;
        printf("%d", result);
}

int     main(int ac, char **av)
{
        if (ac == 4)
        {
                if (av[2][1] == '\0')
                        do_op(av[1], av[2][0], av[3]);
        }
        printf("\n");
        return (0);
}
