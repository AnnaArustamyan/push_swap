#include "../includes/push_swap.h"

int validate()
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