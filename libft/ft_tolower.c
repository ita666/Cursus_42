int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}
#include <stdio.h>
#include <ctype.h>

int main (void)
{
    printf("%c\n", ft_tolower('C'));
    printf("%c\n", tolower('C'));
}