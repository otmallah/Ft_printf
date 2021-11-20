#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

char	*string_to_convert(va_list nu);
void	ft_put_unsigned_nbr_fd(va_list num, int fd);
int     decimal(va_list ap);
int     putstr(va_list las);
int     print_char(va_list lis);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(char const *str);



typedef struct s_print
{
    int i;
    int j;
}   t_print;

#endif