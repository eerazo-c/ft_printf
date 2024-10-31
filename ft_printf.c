/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:17:28 by elerazo-          #+#    #+#             */
/*   Updated: 2024/10/31 15:58:30 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_specific(char c, va_list arg, int countc)
{
	if (c == '%')
		countc = ft_putchar(c);
	if (c == 'c')
		countc = ft_putchar(c);
	if (c == 's')
		countc = ft_putstr(arg, char *);
	if (c == 'p')
		countc = ft_pointer(arg, void *);
	if (c == 'i' || c == 'd')
		countc = ft_putnbr(arg, int);
	if (c == 'u')
		countc = ft_decimal(arg);
	if (c = 'x' || c == 'X')
		countc = ft_hexadecimal(arg);
	return (countc);
}

int ft_printf(char const *str, ...)
{
 	va_list	ap;
	int		print;
	int		i;

	i = 0;
	print = 0;
	va_start(ap, print);
	while (str[i] != '\0')
	{
		if (str[i] == %)
			print = ft_specific(str);
		else 
			print += ft_putchar(str[i]);
		if (str[i] == '-')
			return (-1);
	}
	va_ed(ap);
	return (print);
}
