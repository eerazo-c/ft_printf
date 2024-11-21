/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:17:28 by elerazo-          #+#    #+#             */
/*   Updated: 2024/11/21 19:18:07 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_specific(char c, va_list arg)
{
	int countc;

	countc = 0;
	if (c == '%')
		countc += ft_putchar(c);
	else if (c == 'c')
		countc += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		countc += ft_putstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		countc += ft_putnbr(va_arg(arg, int), 10, "0123456789");
	else if (c == 'u')
		countc += ft_putnbr(va_arg(arg, long), 10, "0123456789");
	else if (c == 'x')
		countc += ft_putnbr(va_arg(arg, long), 16, "0123456789abcdef");
	else if (c == 'X')
		countc += ft_putnbr(va_arg(arg, long), 16, "0123456789ABCDEF");
	else if (c == 'p')
		countc += ft_pointer(va_arg(arg, unsigned long long));
	else if (c == '-')
		return (-1);
	else
	{
		countc += ft_putchar('%');
		countc += ft_putchar(c);
	}
	return (countc);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		print;
	int		i;

	va_start(ap, str);
	i = 0;
	print = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
			print += ft_specific(str[++i], ap);
		else
			print += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (print);
}
/*
int main ()
{
	char *str = "Hola que tal";
	char letra = 'a';
	int num = 55454;
	int negative = -543878772;
	int hexa = 163;

	write (1, "*mio:\n", 6);
	ft_printf("str-> %s\n", str);
	ft_printf("char-> %c\n", letra);
	ft_printf("num-> %d\n", num);
	ft_printf("negaive-> %d\n", negative);
	ft_printf("hexa-> %x\n", hexa);
	ft_printf("heXa-> %X\n", hexa);
	ft_printf("vacio-> %p\n", NULL);
	write(1, "\n", 1);
	write (1, "*ori:\n", 6);
	printf("str-> %s\n", str);
	printf("char-> %c\n", letra);
	printf("num-> %d\n", num);
	printf("negative-> %d\n", negative);
	printf("hexa-> %x\n", hexa);
	printf("heXa-> %X\n", hexa);
	printf("vacio-> %p\n", NULL);
	return (0);
}*/
