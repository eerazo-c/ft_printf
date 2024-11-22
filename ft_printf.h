/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:19:42 by elerazo-          #+#    #+#             */
/*   Updated: 2024/11/21 19:21:46 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define ERROR -1

//<BIBLIOTECAS>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

//prototipo de funciones
//int main (void);
int	ft_printf(char const *str, ...);
int	ft_specific(char c, va_list arg);
int	ft_putchar(int c);
int	ft_putstr(char	*str);
int	ft_putnbr(long long num, long long base, char *str);
int	ft_pointer(unsigned long long som);

#endif
