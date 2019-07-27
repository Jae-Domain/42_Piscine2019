#include "ft_list.h"
t_list *ft_list_push_params(int ac, char **av);

int main(int argc, char **argv)
{
    t_list *a;
    
    a = ft_list_push_params(argc, argv);
    char *x;
    x = "no";
//    t_list *b;
//  b = malloc(sizeof(t_list *));
//    a->next = b;
//   b->str = x;
    printf("%s", a->str);

    return (0);
}