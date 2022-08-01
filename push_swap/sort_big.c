#include "push_swap.h"


void	sort_int_tab(int* tab, int size)
{
	int i;
	int swap;
	
	while (tab_sorted(tab, size))
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
	}
}

int tab_sorted(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}
int	*fill_tab(int* tab, t_list **lst)
{
	int i;
	t_list	*temp;

	temp = *lst;
	i = 0;
	while (temp)
	{
			tab[i] = temp->content;
			i++;
			temp = temp->next;
	}
	return (tab);
 }

void	ft_position(t_list **lst, int *tab, int size)
{
	t_list		*lst_check;
	int			i;

	i = 0;
	lst_check = *lst;
	while (lst_check)
	{
		while (i < size)
		{
			if ((lst_check)->content == tab[i])
				(lst_check)->position = i + 1;
		i++;	
		}
		(lst_check) = (lst_check)->next;
		i = 0;
	}
}

<<<<<<< HEAD
void	pre_sort(t_list **stack_a,t_list **stack_b, int size)
{
	//check la position du nombre dans les chunk a <33% b > 75% c
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * size);
	sort_int_tab(fill_tab(tab, stack_a), size);
	ft_position(stack_a,tab, size);
	i = size;
	while(i--)
=======
int	inf_mediane(t_list **lst, int mediane, int chunk)
{
	t_list *temp;

	int size;
	temp = *lst;
	size = 0;
	while (temp)
	{
		if (temp->chunk_id == chunk && temp->content < mediane)
			size++;
		temp = temp->next;
	}
	return (size);
}

int	min_chunk_mediane(t_list **lst, int mediane, int chunk)
{
	t_list *temp;

	int ok;
	temp = *lst;
	ok = temp->content;
	//printf(" 1er ok %d", ok);
	while (temp)
	{
		if (temp->chunk_id == chunk && temp->content < mediane && temp->content < ok)  
			ok = temp->content;
		temp = temp->next;
	}
	//printf(" last ok %d", ok);
	//printf(" mediane comp %d", mediane);
	return (ok);
}

int	ft_chunk_to_b(t_list **stack_a, t_list **stack_b, int chunk)
{
	int size;
	int mediane;

	
	size = ft_lstsize(*stack_a);
	
	mediane = find_median(stack_a, size, 0);
		chunk++;
	while (size > 0 && (*stack_a)->chunk_id == 0)
>>>>>>> 826bafd85a33a28f9caa7cb8b3ff9386e5a721b9
	{
		if ((*stack_a)->position < (2 * size + size)/4)
		{
			ft_pb(stack_a, stack_b);
			if ((*stack_b)->position <= size / 3)
				ft_rb(stack_b);
		}
<<<<<<< HEAD
		else 
			ft_ra(stack_a);
	}
	while((*stack_a)->next->next)
	{
		if ( (*stack_a)->position == size)
			ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}	
	while((*stack_b))
	{
		
		ft_init_cost(stack_b, ft_lst_size(stack_b));
		ft_push_cost_min();
		
	}
	free(tab);
}
=======
		else
		ft_ra(stack_a);
		size--;
	}
	// if (size > 2)
	// 	mediane = find_median(stack_a, size, chunk);
	
	// while (size > 2 && inf_mediane(stack_a, mediane, chunk))
	// {
	// 	if (((*stack_a)->content < mediane))
	// 	{
	// 		(*stack_a)->chunk_id = chunk;		
	// 		ft_pb(stack_a, stack_b);
	// 	}
	// 	else
	// 	ft_ra(stack_a);
	// }

	return (chunk);
}




int	ft_chunk_to_a(t_list **stack_a, t_list **stack_b, int chunk)
{
	int mediane;
	int	size;
	int i;

	i = 0;
	size = track_chunk(stack_b, chunk);
	mediane = find_median(stack_b, size, chunk);

	if ((*stack_b)->chunk_id == chunk && size < 4) 
	{
		if ((*stack_b)->content < mediane)
		{
			ft_rb(stack_b);
			i++;
		}	
		else 
		{
			ft_pb(stack_b, stack_a);
			while (i > 0)
			{
				ft_rrb(stack_b);
				i--;
			}
		}
	}
	else
	{
			
			if (is_sorted (stack_a))
			{
				if ()
					ft_pa(stack_a, stack_b);
				if ()
					ft_pb(stack_b, stack_a);
			}
	}
	return(ft_to_chunk_a(stack_a, stack_b, chunk));
	
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	int	chunk;
	chunk = 0;
	printf("chunk %d\n", chunk);
	while(ft_lstsize(*stack_a) > 2)
	{

		chunk = ft_chunk_to_b(stack_a, stack_b, chunk);
		//printf("chunk %d\n", chunk);

	}

		t_list *temp1 = *stack_a;
		printf("\n list A \n");
		while (temp1)
		{
			printf("%d ", temp1->content);
			temp1 = temp1->next;
		}
		temp1 = *stack_b;
		printf("\n list B \n");
		while (temp1)
		{
			printf("%d ", temp1->content);
			temp1 = temp1->next;
		}
	sort_2(stack_a);
 }
>>>>>>> 826bafd85a33a28f9caa7cb8b3ff9386e5a721b9

void	ft_init_cost(t_list **stack_b, int size)
{
	
}

void	push_cost_min()
{
	//plus petit que 16 et plus grands que 3 while sur lstb
}
