#include "ft_list.h"
void	*ft_list_push_back(t_list **begin_list, void *data);

int main()
{
    t_list *a;
    t_list *b;
    char x[6] = "Hello";
	a = malloc(sizeof(t_list));
	a->str = x;
    b = malloc(sizeof(t_list));
	a->next = b;
    b->next = NULL;
  //ß  printf("%s", a->str);

    ft_list_push_back(&a, x);
    printf("%s", a->str);
    return (0);
}