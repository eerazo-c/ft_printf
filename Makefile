NAME = libftprintf.a 

SOURCES = ft_printf.c ft_put.c prueba.c

HEADER = ft_printf.h

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

######## COLORS COMPILATED ########
GREEN       = \033[1;92m
PURPLE 		= \033[1;95m
RED         = \033[1;91m
NC          = \033[0m

all: header $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
	@echo "$(PURPLE)\n✨ COMPILED ✨\n$(NC)"

%.o: %.c $(HEADER) Makefile
	@printf "$(PURPLE)Generating IRC objects... %-33.33s \r$(NC)"$@
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	 @ rm -f $(OBJECTS) 

fclean: clean
	  @ rm -f $(NAME)

re: fclean all

header: 
	@echo "# ************************************************************************ #"
	@echo "#      ███╗   ███╗ █████╗░██╗░░██╗███████╗███████╗██╗██╗░░░░░███████╗      #"
	@echo "#      ████╗ ████║██╔══██╗██║░██╔╝██╔════╝██╔════╝██║██║░░░░░██╔════╝      #"
	@echo "#      ██╔████╔██║███████║█████═╝░█████╗░░█████╗░░██║██║░░░░░█████╗░░      #"
	@echo "#      ██║╚██╔╝██║██╔══██║██╔═██╗░██╔══╝░░██╔══╝░░██║██║░░░░░██╔══╝░░      #"
	@echo "#      ██║ ╚═╝ ██║██║  ██║██║░╚██╗███████╗██║░░░░░██║███████╗███████╗      #"
	@echo "#      ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝░░╚═╝╚══════╝╚═╝░░░░░╚═╝╚══════╝╚══════╝      #"
	@echo "# ************************************************************************ #"
	@echo 


.PHONY: clean fclean re
