int ft_isascii(unsigned int c)
{
    if (c > 0 && c <= 127)
        return (1);
    else 
        return (0);
}

#include <ctype.h>
#include <stdio.h>

int main (void)
{
    printf("%d\n", isascii('('));
    printf("%d\n",ft_isascii('('));
}