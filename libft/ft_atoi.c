int ft_atoi(char *nptr)
{
    int i;
    int res;
    int minus;

    minus = 1;
    res = 0;
    i = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == ' '))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            minus *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = (res * 10 + (nptr[i] - 48));
        i++;
    }
    return(res *= minus);
}
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    printf("%d\n", ft_atoi("-12"));
    printf("%d\n", ft_atoi("-12"));
}
