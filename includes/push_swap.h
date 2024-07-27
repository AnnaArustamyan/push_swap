#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
    int data;
    struct s_list *next;
}                   t_list;


int consists_of(char *str, char* syntax);
int check_syntax(char **str);
int validate_grammar(char **str);
int meets_conditions(char *c, int index);
void	ft_lstadd_back(t_list **lst, int data);
t_list	*ft_lstnew(int content);
void	exit_error(t_list **stack_a, t_list **stack_b);
long int	ft_atoi(const char *str);
t_list	*stack_init(int ac, char **av);
void fill_stack_values(char *str, t_list **stack_a);
void		free_stack(t_list **stack);
int validate(char **argv);
void check_doubles(t_list **stack_a);

#endif 