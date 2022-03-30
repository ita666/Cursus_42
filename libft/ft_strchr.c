#include <stddef.h>
char    *ft_strchr(char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return (s);
        s++;        
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
    char *c = "je ne veux pas";
    char *c1 = "je ne veux pas";
    char d = 'v';

    printf("%s\n",ft_strchr(c, d));
    printf("%s\n", strchr(c1, d));
    printf("%p\n", NULL);

}