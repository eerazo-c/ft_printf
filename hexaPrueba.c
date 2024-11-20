#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int main (int ac, char **av)
{
	char *str;

	if (ac > 1)
	{
		int i = ac - 1;
		printf("ori1:%p\n", NULL);
		ft_printf("mio1:%p\n", NULL);
		while (i > 0)
		{
			str = av[i];
			printf("Test %d \n", i);
			printf("original string: %s\n", str);
			printf("Printed Characters:  %x\n", ft_strlen(str));
			ft_printf("mio string: %s\n", str);
			ft_printf("Printed Characters:  %x\n", ft_strlen(str));
			i--;
		}
	}
	return (0);
}
