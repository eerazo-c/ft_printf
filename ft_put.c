/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:05 by elerazo-          #+#    #+#             */
/*   Updated: 2024/11/15 16:33:21 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_check(unsigned long long num, unsigned long long base, char *str)
{
	int	check;
	int	men;	

	check = 0;
	men = 0;
	if (num < base)
		return (ft_putchar(str[num]));
	else
		check = ft_check(num / base, base, str);
	if (check == ERROR)
		return (ERROR);
	men = ft_putchar(str[num % base]);
	return (check + men);
}

int	ft_putnbr(long long num, long base, char *str)
{
	int	n;
	int	check;

	n = 0;
	if (num < 0)
	{
		n = ft_putchar('-');
		num *= -1;
	}
	if (n == ERROR)
		return (ERROR);
	check = ft_check(num, base, str);
	if (check == ERROR)
		return (ERROR);
	return (n + check);
}

int	ft_pointer(unsigned long long som)
{
	int	conte;
	int	hexa;

	conte = write (1, "0x", 2);
	if (conte == ERROR)
		return (ERROR);
	hexa = ft_putnbr((long long)som, 16, "0123456789abcdef");
	if (hexa == ERROR)
		return (ERROR);
	return (conte + hexa);
}
