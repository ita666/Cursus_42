#include <unistd.h>

void ft_putnbr(long a)
{
    char c;

    if (a < 0)
    {
        a *= -1;
        write(1, "-", 1);
    }
    if (a >= 0 && a <= 9)
    {
        c = a + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(a / 10);
        ft_putnbr(a % 10);
    }
}
int main(void)
{
    ft_putnbr(-123);
    write(1, "\n", 1);
}