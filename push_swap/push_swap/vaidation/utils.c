#include "../includes/push_swap.h"

int check_syntax(char **str)
{
    char    *syntax_str;

    syntax_str = "0123456789+- ";

    while (*str)
    {
        if (consists_of(*str, syntax_str) == 0)
              return (0);
        str++;
    }
    return (1);
}

int consists_of(char *str, char* syntax)
{
    int i;
    int j;
    int found;

    i = 0;
    while (str[i])
    {
        j = 0;
        found = 0;
        while (syntax[j])
        {
            if(str[i] == syntax[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if(!found)
            return (0);
        i++;
    }
    return (1);
}
int is_valid_number(const char *str) 
{
    if (*str == '+' || *str == '-') {
        str++;
    }
    while (*str) {
        if (!isdigit(*str)) {
            return 0; 
        }
        str++;
    }
    return 1; 
}