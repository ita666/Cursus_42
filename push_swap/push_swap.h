#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/ft_printf.h"
# include <stdio.h>
# include <limits.h>


void	ft_sa(t_list **lsta);
void	ft_sb(t_list **lstb);
void    ft_ss(t_list **lsta, t_list **lstb);
void	ft_pa(t_list **lsta, t_list **lstb);
void 	ft_pb(t_list **lsta, t_list **lstb);
void	ft_ra(t_list **lsta);
void	ft_rb(t_list **lstb);
void    ft_rr(t_list **lsta, t_list **lstb);
void	ft_rra(t_list **lsta);
void	ft_rrb(t_list **lstb);
void    ft_rrr(t_list **lsta, t_list **lstb);

void	check_duplicate(t_list **lst);
void	check_int(char **str);
void	check_min_max(char **str);
int		is_sorted(t_list **lst);
int		ft_is_min(t_list **lst);

void	ft_position(t_list **lst, int *tab, int size);

int tab_sorted(int *tab, int size);
void	sort_int_tab(int* tab, int size);
int		*fill_tab(int* tab, t_list **lst);
void	pre_sort(t_list **stack_a,t_list **stack_b, int size);



void	sort_2(t_list **stack_a);
void	sort_3(t_list **stack_a);
void	sort_5(t_list **stack_a, t_list	**stack_b);

#endif
