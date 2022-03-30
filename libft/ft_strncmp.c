#include <stddef.h>
int ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
    printf("%d\n", ft_strncmp("Abc", "ABn", 2));
    printf("%d\n", strncmp("Abc", "ABn", 2));
}
