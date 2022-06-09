#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int tab[256] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (tab[(int)av[1][i]] == 0 && av[1][i] == av[2][j])
				{
					write (1, &av[1][i], 1);
					tab[(int)av[1][i]] = 1;
				}
				j++;
			}
			i++;
			j = 0;
		}
	}
}