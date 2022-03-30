#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        *(unsigned char*)(s + i) = '\0';
        i++;
    }
}

#include <stdio.h>
#include <string.h>
int main (void)
{
    char c[50] = "Je ne veux pas travailler";
    char c1[50] = "Je ne veux pas travailler";

    bzero(c + 4, 5);
    ft_bzero(c1 + 4, 5);

    printf("%s\n", c1);
    printf("%s\n", c1);

}