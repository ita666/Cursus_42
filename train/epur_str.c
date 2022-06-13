#include <unistd.h>

int checkspace(char c)
{
	if (c == 9 || c == 32 )
		return (1);
	return (0);
}
int main (int ac, char **av)
{
	int i = 0; 
	if (ac == 2)
	{
		while (av[1][i])
		{
			while (checkspace(av[1][i]))
				i++;
			while( av[1][i])
			{
				if (!checkspace(av[1][i]))
				{
					write (1, &av[1][i], 1);
				}
				if (checkspace(av[1][i]) && !checkspace(av[1][i + 1]))
				{
					write (1, &av[1][i], 1);
				}
				i++;
			}
		}
		write(1, "\n", 1);
	}
}