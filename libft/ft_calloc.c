#include <stddef.h>




void    *calloc(size_t nmemb, size_t size)
{
    void    *PTR;
    size_t i;

    i = 0;
    if(nmemb == 0 || size == 0)
        return ();
    PTR = malloc(nmemb * size);
    if (!PTR)
        return (NULL);
    while ( i < size)
    {   *unsigned char *)(s + i) =  '\0';
        i++;
    }
    return (PTR);    
}