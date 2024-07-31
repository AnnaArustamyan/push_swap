#include "../includes/push_swap.h"

void	ft_lstadd_back(t_list **lst, int data)
{
	t_list	*p;
	t_list	*new;

	new = ft_lstnew(data);
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		p = *lst;
		while (p -> next)
			p = p -> next;
		p -> next = new;
	}
}

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->data = content;
	head->next = NULL;
	return (head);
}

int stack_size(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

void print_stack(t_list *stack)
{
	while (stack)
	{
		printf("%d representation %d\n", stack -> data, stack -> rep);
		stack = stack -> next;
	}
}