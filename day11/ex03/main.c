#include "ft_list.h"
t_list	*ft_list_last(t_list *begin_list)

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
    b->str = y;
  //ß  printf("%s", a->str);
    printf("%d", ft_list_last(a)->str);

    return (0);
}