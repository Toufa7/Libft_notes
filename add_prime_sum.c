#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int rslt = 0;
    int sign = 1;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v') 
        i++;
    if (str[i] == '-')
        sign = -sign;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        rslt = (rslt * 10) + (str[i] - '0');
        i++;
    }
    return (rslt * sign);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}    

void    ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putchar(nbr % 10 + '0');
    }
    else
        ft_putchar(nbr + '0');
}

int    prime(int nbr)
{
    int i = 2;
    if (nbr <= 1)
        return (0);
    if (nbr == 2)
        return (1);
    while (i < nbr)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int i = 0;
    int nbr = ft_atoi(av[1]);
    if (nbr < 0 || ac <= 1 || ac > 2)
    {
        ft_putnbr(0);
        ft_putchar('\n');
        exit(0);
    }
    if (ac == 2)
    {
        int sum;
        while (i <= nbr)
        {
            if (prime(i) == 1)
                sum += i; 
            i++;
        }
        ft_putnbr(sum);
        ft_putchar('\n');
    }
}
