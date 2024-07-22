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

int validate_grammar(char **str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while(str[i][j])
		{
			if(meets_conditions(&str[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int meets_conditions(char * c)
{
	int i;

	i = 0;
	if (*c == '+' || *c == '-')
	{
		if(!(c[i + 1] <= '9' && c[i + 1] >= '0'))
			return (0);
		else if (c > 0 && c[i - 1] != ' ')
			return (0);
		else if (c[i + 1] == '\0')
			return (0);
		return(1);
	}
	else if(*c == ' ')
	{
		if(c > 0 && (c[i - 1] == '+' || c[i - 1] == '-' || c[i - 1] == ' ' || c[i + 1] == ' '))
			return (0);
		 return (1);	
	}	
	else if (*c >= '0' && *c <= '9')
	{
			if(c[i + 1] == '+' || c[i + 1] == '-')
				return(0);
			return (1);
	}
	return (0);
}



int validate( char **argv)
{
	if(check_syntax(argv + 1) && validate_grammar(argv + 1))
		return(1);
	return(0);
}


int main(int argc, char ** argv)
{
    (void)argc;
    int a = validate(argv);
    printf("%d\n", a);
}