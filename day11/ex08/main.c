#include "ft_list.h"
void	ft_list_reverse(t_list **begin_list);

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
    t_list *c;
    c = malloc(sizeof(t_list *));
    b->next = c;
    x = "Yellow";
    c->str = x;
    c->next = NULL;
    ft_list_reverse(&a);
    printf("%s", a->str);

    return (0);
}