
#include <stdio.h>

void	*ft_map(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nbr)
{
	printf("%d", nbr);
}
int main(void)
{
	int tab[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *x;
	x = ft_map(tab, 11, &ft_putnbr);
	printf("\n");
	ft_putnbr(x[10]);
	return (0);
}
