NAME = libftprintf.a

CC = @gcc -c

CFLAGS = -Wall -Werror -Wextra

AR = ar -rc

RM = @rm -f

FILES = ft_convert_add.c\
		ft_decimal.c\
		ft_printf.c\
		ft_putchar_fd.c\
		ft_putnbr_fd.c\
		ft_strlen.c\
		ft_hexdecimal_low.c\
		ft_putstr_fd.c\
		ft_unsigned_int.c\
		ft_print_char.c\
		ft_print_str.c\
		ft_print_all.c\
		print_percent.c\
		ft_hexdecimal_upp.c\
		ft_nbrlen_int.c\
		ft_nbrlen_unsi.c


# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_L_BLUE = \033[1;34m
C_WHITE = \033[1;37m
C_RES = \033[0m

OBJS = $(subst .c,.o,$(FILES)) 
OBJS_B = $(subst .c,.o,$(BS))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(FILES)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"

clean :
	$(RM) $(OBJS) $(OBJS_B)
	@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"

fclean : clean
	$(RM) $(NAME)
	@echo "$(C_RED)[LIBFTPRINTF.A REMOVED!]$(C_RES)"

re : fclean all

rebonus : fclean bonus
