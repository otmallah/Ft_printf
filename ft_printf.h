/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:58:29 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/21 18:58:30 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		print_address(va_list nu);
int		ft_put_unsigned_nbr_fd(va_list num);
int		decimal(va_list ap);
int		putstr(va_list las);
int		print_char(va_list lis);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(char const *str);
int		convert_hex_low(va_list list);
int		convert_hex_upp(va_list list);
int		ft_put(va_list po);
int		print_all(char r, va_list po);
int		ft_printf(const char *str, ...);
int		percent(void);
int		ft_count_int(int num);
int		ft_count_unsi(int num);

typedef struct s_pri
{
	int		i;
	void	*number;
	size_t	k;
	char	*s;
	char	tab[100];
}	t_pri;

typedef struct s_hex_low
{
	int		i;
	int		num;
	int		j;
	long	n;
	char	*s;
	char	tab[100];
}	t_hex_low;

typedef struct s_hex_upp
{
	int		i;
	int		num;
	int		j;
	long	n;
	char	*s;
	char	tab[100];
}	t_hex_upp;
#endif
