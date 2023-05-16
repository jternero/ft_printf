ft_printf - Una implementación simplificada de la función printf en C
ft_printf es una implementación simplificada de la función printf en C. Este proyecto contiene un archivo fuente principal, ft_printf.c, 
así como varias funciones auxiliares para imprimir diferentes tipos de datos, como cadenas de caracteres, números enteros y valores hexadecimales.

Funciones incluidas
Las funciones incluidas en ft_printf son:

ft_printf: Esta función principal recibe una cadena de formato y una serie de argumentos
y los imprime de acuerdo con las especificaciones de formato en la cadena.

ft_putchar: Esta función imprime un solo carácter en la salida estándar.

ft_putstr: Esta función imprime una cadena de caracteres en la salida estándar.

ft_putnbr: Esta función imprime un número entero en la salida estándar.

ft_puthexnbr: Esta función imprime un número entero en formato hexadecimal en la salida estándar.

ft_putuint: Esta función imprime un número entero sin signo en la salida estándar.

Cómo compilar y usar ft_printf
Para compilar ft_printf, simplemente ejecute el comando make en la línea de comandos dentro del directorio del proyecto. 
Esto compilará la biblioteca y generará el archivo libftprintf.a.

Para utilizar ft_printf en su propio proyecto, incluya el archivo ft_printf.h en su archivo fuente y utilice la función ft_printf como lo haría con la función printf estándar.
También puede utilizar las funciones auxiliares incluidas para imprimir valores específicos.
