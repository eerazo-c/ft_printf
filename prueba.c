#include "ft_printf.h"
/*
int main (void)
{
	int num;

	num = 0x1A3F;
	//int a = 255;

	write(1, "mio\n", 4);
	ft_printf("mayuscula:%X\n", num);
	ft_printf("minuscula:%X\n", num);
	write (1, "\n", 1);
	write (1, "ori\n", 4);
	printf("mayuscula:%X\n", num);
	printf("minuscula:%x\n", num);
}*/
int main ()
{
	char str[15] = "Hola que tal";

	ft_printf("mio:%p\n", str);
	printf("ori:%p\n", str);
}
