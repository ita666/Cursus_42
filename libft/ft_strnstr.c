#include <stddef.h>
char * ft_strnstr(char *s1, char *s2, size_t len )
{
    size_t i;
    size_t j;

    i = 0;
    if (s2[0] == '\0')
        return(s1);
    while (s1[i] && i < len)
    {
        j = 0;
        while (s2[j] == s1[i + j])
        {
            if (s2[j + 1] == '\0')
                return (s1 + i);
            j++;
        }
        i++;
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
    char *a = "je veux une barre";
    char *b = "";

    printf("%s\n", ft_strnstr(a, b, 24));
    //printf("%s\n", strnstr(a, b, 4));
}