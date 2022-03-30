unsigned long int ft_strlen(char *c)
{
    unsigned long int i;

    i = 0;
    while (c[i])
        i++;
    return (i);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
    printf("%ld\n", ft_strlen("moi"));
    printf("%ld\n", strlen("moi"));
}