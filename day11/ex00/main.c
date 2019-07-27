
#include "ft_list.h"
#include <stdio.h>
t_list	*ft_create_elem(void *data);

int main()
{
    t_list *a;
    char x[6] = "Hello";
    printf("%s", x);

    a = ft_create_elem(x);
    printf("%s", a->str);
    return (0);
}