#include <stddef.h>
int ft_memcmp( void *s1, void *s2, size_t size )
{
    size_t i;

    i = 0;

    while (i < size)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return (0);  
}
#include <stdio.h>
#include <string.h>
int main (void)
{
    printf("%d\n", ft_memcmp("Ab", "AB", 3));
    printf("%d\n", memcmp("Ab", "AB", 3));
}