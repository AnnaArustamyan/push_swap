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
    int representation;
    struct s_list *next;
}                   t_list;

t_list      *ft_lstnew(int content);
t_list      *stack_init(int ac, char **av);
void        fill_stack_values(char *str, t_list **stack_a);
void        free_stack(t_list **stack);
void        ft_lstadd_back(t_list **lst, int data);
void        print_stack(t_list *stack);
int         stack_size(t_list *lst);

int         consists_of(char *str, char* syntax);
int         check_syntax(char **str);
int         validate_grammar(char **str);
int         meets_conditions(char *c, int representation);

void        exit_error(t_list **stack_a, t_list **stack_b);
long int    ft_atoi(const char *str);
void        bubble_sort(int	*arr, int size);

int         validate(char **argv);
void        check_doubles(t_list **stack_a);

void op_push(t_list **stack_a, t_list **stack_b);
void op_swap(t_list **stack);
void op_rev_rot(t_list **stack);
void op_rotate(t_list **stack);

void pa(t_list **stack_a, t_list **stack_b, int flag);
void pb(t_list **stack_b, t_list **stack_a, int flag);

void sa(t_list **stack_a, int flag);
void sb(t_list **stack_b, int flag);
void ss(t_list **stack_a, t_list **stack_b, int flag);

void rra(t_list **stack_a, int flag);
void rrb(t_list **stack_b, int flag);
void rrr(t_list **stack_a, t_list **stack_b, int flag);

void ra(t_list **stack_a, int flag);
void rb(t_list **stack_b, int flag);
void rr(t_list **stack_a, t_list **stack_b, int flag);

int *create_sort_fill_arr (t_list **stack_a);
void print_stack(t_list *stack);
void assign_indexes(t_list **stack_a, int *arr);

int my_sqrt(int nb);
int my_log(int nb);


#endif 