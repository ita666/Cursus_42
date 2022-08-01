#include "push_swap.h"

void    ft_sa(t_list **lst)
{
    t_list    *tmp;

    if (!*lst || !(*lst)->next)
        return ;
    if (ft_lstsize(*lst) > 1)
    {
        tmp = (*lst)->next;
        (*lst)->next = (*lst)->next->next;
        tmp->next = *lst;
        *lst = tmp;
        ft_putstr_fd("sa\n",1);
    }
}

void    ft_sb(t_list **lst)
{
    t_list    *tmp;

    if (!*lst || !(*lst)->next)
        return ;
    if (ft_lstsize(*lst) > 1)
    {
        tmp = (*lst)->next;
        (*lst)->next = (*lst)->next->next;
        tmp->next = *lst;
        *lst = tmp;
        ft_putstr_fd("sb\n",1);
    }
}

void    ft_ss(t_list **lsta, t_list **lstb)
{
    ft_sa(lsta);
    ft_sb(lstb);
}

void ft_pa(t_list **lstb, t_list **lsta)
{
    t_list *tmp;
    
    if (ft_lstsize(*lstb) > 0)
    {
        tmp = (*lstb)->next;
        ft_lstadd_front(lsta, *lstb);
        *lstb = tmp; 
        ft_putstr_fd("pa\n",1);
    }
}

void ft_pb(t_list **lsta, t_list **lstb)
{
    t_list *tmp;

    if (ft_lstsize(*lsta) > 0)
    {
        tmp = (*lsta)->next;
        ft_lstadd_front(lstb, *lsta);
        *lsta = tmp;
        ft_putstr_fd("pb\n",1);
    }
}

void ft_ra(t_list **lsta)
{
    t_list *tmp;
    t_list *last;

    if (ft_lstsize ( *lsta) > 1)
    {
        tmp = (*lsta)->next;
        last = ft_lstlast(*lsta);
        (*lsta)->next = NULL;
        last->next = *lsta;
        *lsta = tmp;
        ft_putstr_fd("ra\n",1);
    }
}
void ft_rb(t_list **lstb)
{
    t_list *tmp;
    t_list *last;
    
    if (ft_lstsize ( *lstb) > 1)
    {
        tmp = (*lstb)->next;
        last = ft_lstlast(*lstb);
        (*lstb)->next = NULL;
        last->next = *lstb;
        *lstb = tmp;
        ft_putstr_fd("rb\n",1);
    }
}

void    ft_rr(t_list **lsta, t_list **lstb)
{
    ft_ra(lsta);
    ft_rb(lstb);
}
void ft_rra(t_list **lsta)
{
    t_list *tmp;
    t_list *before_last;

    tmp = *lsta;
    before_last = *lsta;
    while(before_last->next->next)
        before_last = before_last->next;
    tmp = before_last->next;
    before_last->next = NULL;
    tmp->next= *lsta;
    *lsta = tmp;
    ft_putstr_fd("rra\n",1);
}

void ft_rrb(t_list **lstb)
{
    t_list *tmp;
    t_list *before_last;

    tmp = *lstb;
    before_last = *lstb;
    
    if (ft_lstsize ( *lstb) > 1)
    {
        while(before_last->next->next)
            before_last = before_last->next;
        tmp = before_last->next;
        before_last->next = NULL;
        tmp->next= *lstb;
        *lstb = tmp;
        ft_putstr_fd("rrb\n",1);
    }
}

void    ft_rrr(t_list **lsta, t_list **lstb)
{
    ft_rra(lsta);
    ft_rrb(lstb);
}