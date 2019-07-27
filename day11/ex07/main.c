#include "ft_list.h"
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

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
    printf("%s", ft_list_at(a, 2)->str);

    return (0);
}