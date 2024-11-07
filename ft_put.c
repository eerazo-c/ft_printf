/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:57:05 by elerazo-          #+#    #+#             */
/*   Updated: 2024/11/07 16:31:29 by elerazo-         ###   ########.fr       */
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

int	ft_check(long num)
{
	int	check;
	int	men;

	check = 0;
	men = 0;
	if (num < 10)
		return (ft_putchar(num + '0'));
	else
		check = ft_check(num / 10);
	if (check == -1)
		return (-1);
	men = ft_putchar((num % 10) + '0');
	return (check + men);
}

int	ft_putnbr(long num)
{
	int	n;
	int	check;

	n = 0;
	if (num < 0)
	{
		n = ft_putchar('-');
		num *= -1;
	}
	if (n == -1)
		return (-1);
	check = ft_check(num);
	if (check == -1)
		return (-1);
	return (n + check);
}
