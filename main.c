#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" // Cambia por el nombre de tu header si es diferente

int main(void)
{
    int ret1, ret2;

    // Caso 1: Cadenas normales
    ret1 = ft_printf("Hola, %s!\n", "Eli");
    ret2 = printf("Hola, %s!\n", "Eli");
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 2: Números positivos y negativos
    ret1 = ft_printf("Número: %d y negativo: %d\n", 42, -42);
    ret2 = printf("Número: %d y negativo: %d\n", 42, -42);
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 3: Sin argumentos
    ret1 = ft_printf("Solo texto sin argumentos.\n");
    ret2 = printf("Solo texto sin argumentos.\n");
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 4: Valores extremos
    ret1 = ft_printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN);
    ret2 = printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN);
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 5: Hexadecimal
    ret1 = ft_printf("Hexadecimal: %x, mayúscula: %X\n", 255, 255);
    ret2 = printf("Hexadecimal: %x, mayúscula: %X\n", 255, 255);
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 6: NULL como cadena
    ret1 = ft_printf("Cadena NULL: %p\n", NULL);
    ret2 = printf("Cadena NULL: %p\n", NULL);
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 7: Punteros
    int a = 42;
    ret1 = ft_printf("Puntero: %p\n", &a);
    ret2 = printf("Puntero: %p\n", &a);
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 8: Caracteres especiales
    ret1 = ft_printf("Caracter: %c\n", 'A');
    ret2 = printf("Caracter: %c\n", 'A');
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 9: Ancho y precisión
    ret1 = ft_printf("Ancho: %10d, Precisión: %.5d\n", 42, 42);
    ret2 = printf("Ancho: %10d, Precisión: %.5d\n", 42, 42);
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);

    // Caso 10: Formatos desconocidos
/*    ret1 = ft_printf("Formato desconocido: %q\n");
    ret2 = printf("Formato desconocido: %q\n");
    printf("ft_printf: %d, printf: %d\n\n", ret1, ret2);
*/
    return 0;
}
