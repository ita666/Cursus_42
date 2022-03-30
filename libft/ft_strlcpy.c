#include <stddef.h>
unsigned int ft_strlcpy(char *dst, char *src, size_t size)
{
    size_t i;
    size_t l;
  
    i = 0;
    l = 0;
    while (src[l])
        l++;
    if (l + 1 < size)
    {
        while (i < l + 1)
        {
            dst[i] = src[i];
            i++;
        }
    }
    else if (size != 0 )
    {
        while (i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[size - 1] = '\0';
    }
    return (l);
    }

#include <stdio.h>
int main (void)
{
    char c[7] = "untest";
    char d[4] = "foi";
    ft_strlcpy(c, d, 3);

    printf("%s\n",c);

}