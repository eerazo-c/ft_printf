/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:19:42 by elerazo-          #+#    #+#             */
/*   Updated: 2024/10/31 16:00:23 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifdef FT_PRINTF_H
# define FT_PRINTF_H

//<BIBLIOTECAS>
#include <stdarg.h>

//prototipo de funciones
int ft_printf(char const *, ...);
int	ft_specific(char c, va_list arg, int count_c);
int	ft_putchar(char c);

#endif
