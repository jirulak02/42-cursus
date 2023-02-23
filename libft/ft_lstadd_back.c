#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    while (*lst != NULL)
    {
        if (*lst->next == NULL)
        {
            new->next = *lst;
	        *lst = new;
            return ;
        }
		*lst = *lst->next;
    }
    return ;
}