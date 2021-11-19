#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>

char	*string_to_convert(va_list nu);
void	ft_put_unsigned_nbr_fd(va_list num, int fd);
int     decimal(va_list ap);
int     putstr(va_list las);
int     print_char(va_list lis);


typedef struct s_print
{
    int count;

}   t_print;

#endif