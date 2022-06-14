#include <unistd.h>

int checkspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}


int main(int ac, char **av)
{
	int i = 0;
	int n = 0; 
	
	if (ac > 1)
	{
		
		while (checkspace(av[1][i]))
				i++;
		while (av[1][i])
		{
			if (checkspace(av[1][i - 1]) && ! checkspace(av[1][i]))
				n++;
			i++;
		}
		i = 0;
		if (n > 1)
		{
				
			while (checkspace(av[1][i]))
				i++;
			while (!checkspace(av[1][i]))
				i++;
			while (checkspace(av[1][i]))
				i++;
			while (av[1][i])
			{
				if (!checkspace(av[1][i]) || (checkspace(av[1][i]) && !checkspace(av[1][i +1]) && av[1][i +1] != '\0'))
					write(1, &av[1][i], 1);
				i++;
			}
			i = 0;
			write(1, " ", 1);
			while (checkspace(av[1][i]))
				i++;
			while (!checkspace(av[1][i]))
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
		else
		{
			while ( av[1][i] && checkspace(av[1][i]))
				i++;
			while ( av[1][i] && !checkspace(av[1][i]))
			{
				write(1, &av[1][i], 1);
				i++;
			}

		}

	}
	write (1, "\n", 1);
}