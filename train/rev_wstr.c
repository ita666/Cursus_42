#include <unistd.h>
int	main(int ac, char **av)
{
	int i = 0;
	int j;

	if(ac == 2)
	{
		while (av[1][i])
			i++;
		while (i >= 0)
		{
			while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\0' || av[1][i] == '\t'))
				i--;
			j = i;
			while (j >= 0 && (av[1][j] != ' ' && av[1][i] != '\t'))
				j--;
			write(1, " ", 1);	
			write(1, &av[1][j + 1], i - j);
			i = j;
		}
	}
	write(1, "\n", 1);
	return(0);
}