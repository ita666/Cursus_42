int ft_strlcat(char *dst, char *src, size_t size)
{
    size_t i;
    size_t ld;
    size_t ls;

    i = 0;
    ld = 0;
    ls = 0;

    while (dst[ld])
        ld++;
    while (src[ls])
        ls++;
    if (size <= ld || size == 0)
        return (size + ld);
    while (src[i] && ((ld + i) < (size - 1)))
    {
        dst[ld + i] = src[i];
        i++;
    }
    dst[ld + i] = '\0';
    return (ld + ls);
}
#include <stdio.h>
int main (void)
{
    char c[17] = "je n'ai pas envi";
    char c1[4] = "peux";
    int n = 0;

    n = ft_strlcat(c, c1, 25);
    printf ("%s\n", c);
    printf ("%d\n", n);
}