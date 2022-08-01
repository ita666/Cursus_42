#include "push_swap.h"

void	check_duplicate(t_list **lst)
{
	t_list	*lst_check;
	t_list	*temp;

	lst_check = *lst;
	temp = *lst;
	lst_check = lst_check->next;
	while (temp)
	{
		while (lst_check)
		{
			if (lst_check->content == temp->content)
				ft_putstr_fd("ERROR", 1);
			lst_check = lst_check->next;
		}
		temp = temp->next;
	}
}

void	check_int(char **str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
			{	
				ft_putstr_fd(str[i], 1);
				ft_putstr_fd("ERROR\n", 1);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	check_min_max(char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (ft_strncmp(str[i], ft_itoa(ft_atoi(str[i])), 12) != 0)
			ft_putstr_fd("ERROR\n", 1);
		i++;
	}
}

int	is_sorted(t_list **lst)
{
	t_list	*list;

	list = *lst;
	while (list->next)
	{
		if (list->content > list->next->content)
			return (0);
		list = list->next;
	}
	return (1);
}

int	ft_is_min(t_list **lst)
{
	t_list		*lst_check;
	int			nb;
	int			id;

	nb = 2147483647;
	id = 1;
	lst_check = *lst;
	while (lst_check)
	{
		if (lst_check->content < nb)
			nb = lst_check->content;
		(lst_check)->index = id++;
		lst_check = lst_check->next;
	}
	lst_check = *lst;
	while (lst_check)
	{
		if ((lst_check)->content == nb)
		{	
			(lst_check)->position = 1;
			return (lst_check->index);
		}
		(lst_check) = (lst_check)->next;
	}
	return (0);
}
