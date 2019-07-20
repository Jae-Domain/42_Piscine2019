#include "ft_abs.h"
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int x;

	x = -5;
	putchar(ABS(-5) + '0');
	x = 5;
	putchar(ABS(x) + '0');
}
