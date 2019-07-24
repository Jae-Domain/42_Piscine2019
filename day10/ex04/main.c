
#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int 	is_a(char *c)
{
	if (*c == 'a')
		return (1);
	return (0);
}
int main(void)
{
	int x;
	x = 5;
	char *string = "Hollo";
	x = ft_count_if(&string, &is_a);
	printf("%d", x);
	return (0);
}
