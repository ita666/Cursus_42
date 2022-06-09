#include <stdio.h>

char *ft_strprbk(const char *s1, const char *s2)
{
	int i  = 0;
	int j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{	
			if (s1[i] == s2[j])
			return ((char *)s1 + i);
		j++;
		}
		i++;
	}
	return(0);
}

int main ()
{
	char *s1 = "je ne veux pas";
	char *s2 = "vkklpma";

	printf("%s", ft_strprbk(s1, s2));
}