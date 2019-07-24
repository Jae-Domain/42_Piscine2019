
#include <stdio.h>

char	*ft_rot42(char *str);

int main(void)
{
	char str[6] = "Hello";
	char *str2;
	str2 = ft_rot42(str);

	printf(" %s", str);

	return (0);
}
