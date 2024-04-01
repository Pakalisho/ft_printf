NAME	=	libftprintf

SRCS	=	ft_printf \
			ft_printchar \
			ft_printhex \
			ft_printnbr \
			ft_printpercent \
			ft_printptr \
			ft_printstr \
			ft_printunsigned \

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

OUTN	= $(NAME).a

CSRCS	= $(SRCS:%=%.c)

OSRCS	= $(SRCS:%=%.o)

$(NAME):
	$(CC) $(CFLAGS) -c $(CSRCS) -I./
	ar -rc $(OUTN) $(OSRCS)

all: $(NAME)

clean:	
		rm -f $(OSRCS)

fclean:	clean
		rm -f $(NAME).a

re:	fclean all

.PHONY:	all, clean, fclean, re
