#include <unistd.h>

void	putnbr(int nb)
{
	char c;
	
	if (nb >= 0 && nb <= 9)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		putnbr(nb / 10);
		putnbr(nb%10);
	}
}


int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{	
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else if (i % 5 == 0)
		{	
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else
		{	
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}

}