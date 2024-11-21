/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:27:02 by elerazo-          #+#    #+#             */
/*   Updated: 2024/11/21 15:19:39 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int main ()
{
	char *str = "Hola que tal";
	char letra = 'a';
	int num = 5;
	int negative = -5432;
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
}
