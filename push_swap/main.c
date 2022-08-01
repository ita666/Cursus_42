
#include "push_swap.h"
#include "printf.h"
#include <stdio.h>



int main(int ac, char **av)
{
	t_list *lsta;
	t_list *lstb;
	int *tab;
	
	int i;

	t_list *temp;
	t_list *temp1;

	lsta = NULL;
	lstb = NULL;
	tab = malloc(sizeof(int) * (ac -1));
	i = 0;
	while (av[i + 1])
	{
		ft_lstadd_back(&lsta, ft_lstnew(ft_atoi(av[i + 1])));
		i++;
	}
	i = 0;
	while (av[i + 1])
	{
		tab[i] = ft_atoi(av[i + 1]);
		i++;
	}

	//printf("test mediane %d\n", find_median(fill_tab(tab, &lsta, 0), ac -1));
	// while (av[i + 1])
	// {
	// 	ft_lstadd_back(&lstb, ft_lstnew(ft_atoi(av[i + 1])));
	// 	i++;
	// }
<<<<<<< HEAD
=======

	push_b(&lsta, &lstb);
	push_b(&lsta, &lstb);
	

	//ft_position(&lsta, tab, ac -1);
>>>>>>> 826bafd85a33a28f9caa7cb8b3ff9386e5a721b9
	free(tab);
	
	pre_sort(&lsta, &lstb, ft_lstsize(lsta));	
	
	temp = lsta;
	temp1 = lstb;
	printf("\n list A after push B \n");
	while (temp)
	{
		printf("%d-", temp->content);
		printf("%d ", temp->chunk_id);
		temp = temp->next;
	}
	//check_duplicate(&lsta);
	printf("\n list B after push B\n");
	while (temp1)
	{
<<<<<<< HEAD
		printf("%d ", temp1->content);
=======
		printf("%d-", temp1->content);
		printf("%d ", temp1->chunk_id);
>>>>>>> 826bafd85a33a28f9caa7cb8b3ff9386e5a721b9
		temp1 = temp1->next;
	}
}