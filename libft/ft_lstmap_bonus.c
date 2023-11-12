#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst)
	{
		node = (t_list *)malloc (sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		node->next = NULL;
		node->content = f(lst->content);
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}