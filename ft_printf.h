/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:19:42 by elerazo-          #+#    #+#             */
/*   Updated: 2024/11/13 18:16:06 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define ERROR -1

//<BIBLIOTECAS>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

//prototipo de funciones
int	main(void);
int	ft_printf(char const *str, ...);
int	ft_specific(char c, va_list arg, int count_c);
int	ft_putchar(char c);
int	ft_putstr(char	*str);
int	ft_putnbr(long num, long base, char *str);
int	ft_pointer(unsigned int som);

#endif
