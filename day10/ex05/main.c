
#include <stdio.h>

int		compare (int x, int y)
{
	return (x - y);
}
int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int main()
{
	int tab[5] = {4, 4, 4, 4, 3};
	int length = 5;
	printf( "%d", ft_is_sort(tab, length, &compare));

	return (0);
}
