

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z') || ( c >= '0' && c <= '9'))
        return (8);
    else 
        return (0);
}


#include <ctype.h>
#include <stdio.h>
int main (void)\
{
    printf("%d\n", isalnum('C'));
    printf("%d\n", ft_isalnum('C'));
}