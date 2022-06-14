#include <unistd.h>

int check(char c)
{
	if ( c == ' ' || c == '\t')
		return(1);
	return(0);
}

int main (int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i] && check(av[1][i]))
			i++;
		while(av[1][i])
		{
			if(!check(av[1][i]))
				write(1, &av[1][i], 1);
			if (check(av[1][i]) && !check(av[1][i+1]) && av[1][i + 1] != '\0')
			{
				write(1, " ", 1);
				write(1, " ", 1);
				write(1, " ", 1);
			}
			i++;
		}
	}
	write( 1, "\n", 1);
	}