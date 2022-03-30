#include <stddef.h>
char *ft_strrchr (char *s, int c)
{
    char *temp;

    temp = NULL;
    while (*s)
    {
        if (*s == c)
            temp = s;
        s++;        
    }
    return (temp);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
    char *c = "je ne veux pvas";
    char *c1 = "je ne veux pvas";
    char d = 'v';

    printf("%s\n",ft_strrchr(c, d));
    printf("%s\n", strrchr(c1, d));
    printf("%p\n", NULL);
}
