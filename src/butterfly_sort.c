#include "../includes/push_swap.h"

int* create_sort_fill_arr (t_list **stack_a)
{
    int *arr;
    int size;
    int i;
    t_list *p;

    size = stack_size(*stack_a);
    arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return NULL;
    p = *stack_a;
    i = 0;
    while (p)
    {
        arr[i] = p->data;
        p = p->next;
        i++;
    }
    bubble_sort(arr, size);
    return (arr);
}

void assign_indexes(t_list **stack_a, int *arr)
{
    t_list *p;
    int i;
    int size;

    size = stack_size(*stack_a);
    p = *stack_a;
    i = 0;
    while (p)
    {
        i = 0;
        while (i < size)
        {
            if (p->data == arr[i])
            {
                p->index = i;
                break;
            }
            i++;
        }
        p = p->next;
    }
}

void butterfly_sort(t_list stack_a, t_list stack_b, int stack_size)
{


}