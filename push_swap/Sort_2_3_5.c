/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort_2_3_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:37:43 by yanthoma          #+#    #+#             */
/*   Updated: 2022/07/19 12:46:28 by yanthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	sort_2(t_list **stack_a)
{
	if (!is_sorted(stack_a))
		ft_sa(stack_a);
}

void	sort_3(t_list **stack_a)
{
	while (!is_sorted(stack_a))
	{
		if ((*stack_a)->content > (*stack_a)->next->content
			&& (*stack_a)->content > (*stack_a)->next->next->content)
			ft_ra(stack_a);
		else if ((*stack_a)->next->content > (*stack_a)->content
			&& (*stack_a)->next->content > (*stack_a)->next->next->content)
			ft_rra(stack_a);
		else if ((*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a);
	}
}
/* sort 5 marque l'int min position par 1 push sur b 
trouve le deuxieme int min push sur b
sort 3 
et pa jusqu'a epuisement de pb*/

void	sort_5(t_list **stack_a, t_list	**stack_b)
{
	if ((*stack_a)->position != 1 && ft_is_min(stack_a) < 4)
		while ((*stack_a)->position != 1)
			ft_ra(stack_a);
	else
		while ((*stack_a)->position != 1)
			ft_rra(stack_a);
	(*stack_a)->position = 0;
	if (ft_lstsize(*stack_a) > 4)
		ft_pb(stack_a, stack_b);
	if ((*stack_a)->position != 1 && ft_is_min(stack_a) < 4)
		while ((*stack_a)->position != 1)
			ft_ra(stack_a);
	else
		while ((*stack_a)->position != 1)
			ft_rra(stack_a);
	(*stack_a)->position = 0;
	if (ft_lstsize(*stack_a) > 3)
		ft_pb(stack_a, stack_b);
	sort_3(stack_a);
	ft_pa(stack_b, stack_a);
	ft_pa(stack_b, stack_a);
}



// int	ft_chunk_to_a(t_list **stack_a, t_list **stack_b, int chunk)
// {
// 	int i;
// 	int size;
// 	int mediane;
	
// 	size = track_chunk(stack_b, chunk);
// 	mediane = find_median(stack_b, size, chunk);
// 	i = 0;
// 	while (track_chunk(stack_b, chunk))
// 	{
		
// 		if(!sup_mediane(stack_b, mediane, chunk))
// 		{
// 			size = track_chunk(stack_b, chunk);
// 			mediane = find_median(stack_b, size, chunk);
// 		}	
// 		printf("chunk_id %d \n", chunk);
// 		printf("taille chunk %d \n", size);
// 		printf("mediane %d\n", mediane);
// 		t_list *temp1 = *stack_b;
// 		while (temp1)
// 		{
// 			printf("%d ", temp1->content);
// 			temp1 = temp1->next;
// 		}
// 		printf(" end stack \n");
// 		while (((*stack_b)->content <= mediane) && (track_chunk(stack_b, chunk) > 2) && ((*stack_b)->chunk_id == chunk) )		
// 		{
// 			ft_rb(stack_b);
// 			i++;
// 		}
// 		if (((*stack_b)->content > mediane) && (track_chunk(stack_b, chunk) > 2) && ((*stack_b)->chunk_id == chunk))
// 		{
// 			//(*stack_b)->chunk_id = 0;
// 			printf(" content before push %d\n", (*stack_b)->content);
// 			ft_pb(stack_b, stack_a);
// 		}
// 		while (i > 0)
// 		{
// 			ft_rrb(stack_b);
// 			i--;
// 		}
// 		// if (track_chunk(stack_b, chunk) == 2 && ((*stack_b)->content < (*stack_b)->next->content))
// 		// {
// 		// 		ft_sb(stack_b);
// 		// }
// 		printf(" size cond %d ", track_chunk(stack_b, chunk));
// 		printf(" chunk id %d\n ",(*stack_b)->chunk_id);
// 		printf(" chunk-id %d\n ", chunk);
// 		if (track_chunk(stack_b, chunk) > 0 && track_chunk(stack_b, chunk) < 3 && ((*stack_b)->chunk_id == chunk)) 
// 		{
// 			printf(" content before push 1 3 - %d\n", (*stack_b)->content);
// 			ft_pb(stack_b, stack_a);
// 		}
// 	}
// 	if (track_chunk(stack_b, chunk) == 0)
// 		chunk--;
// 	return (chunk);
// }