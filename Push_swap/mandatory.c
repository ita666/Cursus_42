#include "push_swap.h"

void	sa(t_list *lsta)
{
	t_list *temp;
	int i;

	i = 0;
	temp = NULL;
	if (!lsta)
		return ;
		lsta->content = temp->content;
		lsta->content = lsta->next->content;
		temp->next = NULL;
		lsta = lsta->next;
		lsta->content = temp->content;
}

