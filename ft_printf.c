/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:17:28 by elerazo-          #+#    #+#             */
/*   Updated: 2024/11/13 18:22:46 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_specific(char c, va_list arg, int countc)
{
	if (c == '%')
		countc += ft_putchar(c);
	if (c == 'c')
		countc += ft_putchar(va_arg(arg, int));
	if (c == 's')
		countc += ft_putstr(va_arg(arg, char *));
	if (c == 'i' || c == 'd')
		countc += ft_putnbr(va_arg(arg, long), 10, "0123456789");
	if (c == 'u')
		countc += ft_putnbr(va_arg(arg, long), 10, "0123456789");
	if (c == 'x')
		countc += ft_putnbr(va_arg(arg, long), 16, "0123456789abcdef");
	if (c == 'X')
		countc += ft_putnbr(va_arg(arg, long), 16, "0123456789ABCDEF");
	if (c == 'p')
		countc += ft_pointer(va_arg(arg, unsigned int));
	if (c == '-')
		return (-1);
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
		if (str[i] == '%')
			print += ft_specific(str[++i], ap, print);
		else
			print += ft_putchar(str[i]);
		if (print == '-')
			return (-1);
		i++;
	}
	va_end(ap);
	return (print);
}
