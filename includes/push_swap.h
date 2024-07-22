#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
    int value;
    int index;
    struct s_list *next;
    struct s_list *prev;
}                   t_list;


int consists_of(char *str, char* syntax);
int check_syntax(char **str);

#endif 