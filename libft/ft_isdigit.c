int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return(2048);
    else
        return (0);
}

#include <ctype.h>
#include <stdio.h>

int main (void)
{
    printf("%d\n", isdigit('8'));
    printf("%d\n", ft_isdigit('8'));
}