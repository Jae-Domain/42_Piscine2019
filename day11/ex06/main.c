#include "ft_list.h"
void    ft_list_clear(t_list **begin_list);

int main(int argc, char **argv)
{
    t_list *a;
    
    char *x;
    x = "no";
    t_list *b;
    a = malloc(sizeof(t_list *));
    b = malloc(sizeof(t_list *));
    a->str = x;
    a->next = b;
    x = "yes";
    b->str = x;
    b->next = NULL;
    ft_list_clear(&a);
    printf("%s", a->str);

    return (0);
}