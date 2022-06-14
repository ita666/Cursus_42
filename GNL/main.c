#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("get_next_line.h", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
	}

	printf("\n\n");
	fd = open("get_next_line.h", O_RDONLY);
		line = get_next_line(fd);
		printf("%s", line);
		free(line);

	return (0);
}