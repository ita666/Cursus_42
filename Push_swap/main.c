#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*dest;

	dest = malloc(sizeof(*dest));
	if (!dest)
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == ((void *)0))
		*lst = new;
	else
		ft_lstadd_back(&((*lst)->next), new);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	minus;

	minus = 1;
	res = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10 + (nptr[i] - 48));
		i++;
	}
	return (res *= minus);
}

int main(int ac, char **av)
{
	int i;
	t_list *lsta;

	lsta = NULL;
	i = 1;

	while (av[i])
	{
		ft_lstadd_back(lsta, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	sa(lsta);
	while (lsta)
	{
		printf("%d\n", lsta->content);
		lsta->next;
	}

}