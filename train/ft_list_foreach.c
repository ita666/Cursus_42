#include "ft.h"
#include <stdlib.h>
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list)
		return;
	while (!begin_list)
	{
		f(begin_list -> data);
		begin_list = begin_list ->next;
	}

}


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || begin_list == NULL)
		return;
	t_list *cur = *begin_list;

	if (cmp(cur -> data, data_ref) == 0)
	{
		*begin_list = cur -> next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur -> next , data_ref, cmp);
}


//-----------------------------------------------------------------//
void	swap_values(t_list *a, t_list *b)
{
	int swap = a->data;
	a->data = b->data;
	b->data = swap;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swapped = 1;
	t_list *cur = lst;

	while (swapped == 1)
	{
		swapped = 0;
		while (cur != 0 && cur->next != 0)
		{
			if (cmp(cur->data, cur->next->data) == 0)
			{
				swap_values(cur, cur->next);
				swapped = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}