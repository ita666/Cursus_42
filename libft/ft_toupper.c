int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char c = 'c';
    char c1 = 'c';

    printf("%c\n", ft_toupper(c));
    printf("%c\n", toupper(c1));
}