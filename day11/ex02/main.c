#include "ft_list.h"
void	*ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

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
    char y[6] = "Goood";
  //ß  printf("%s", a->str);

    ft_list_push_front(&a, y);
    printf("%s", a->str);
    printf("%s", (a->next)->str);
    return (0);
}