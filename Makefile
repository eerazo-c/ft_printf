# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 16:47:26 by elerazo-          #+#    #+#              #
#    Updated: 2024/11/21 16:50:29 by elerazo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
AR			=	ar
ARFLAGS		=	-rcs
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
OBJDIR		=	build
SRCS		=	ft_printf.c ft_put.c 
OBJS		=	$(addprefix $(OBJDIR)/, ${SRCS:.c=.o})

PURPLE		=	\033[0;35m
BLUE		=	\033[0;34m
GREEN		=	\033[0;32m
RED			=	\033[0;31m
RESET		=	\033[m

all: banner $(NAME)

banner:
	@printf "%b" "$(PURPLE)\n"
	@echo
	@echo "    ____________   ____  ____  _____   ______________"
	@echo "   / ____/_  __/  / __ \/ __ \/  _/ | / /_  __/ ____/"
	@echo "  / /_    / /    / /_/ / /_/ // //  |/ / / / / /_    "
	@echo " / __/   / /    / ____/ _, _// // /|  / / / / __/    "
	@echo "/_/     /_/____/_/   /_/ |_/___/_/ |_/ /_/ /_/       "
	@echo "         /_____/                                     "
	@echo
	@printf "%b" "\n$(RESET)"


$(OBJS): $(OBJDIR)/%.o : %.c ft_printf.h | $(OBJDIR)
	@printf "%-42b" "$(BLUE)compiling... $(PURPLE)$(@F)$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@-mkdir $(OBJDIR)

$(NAME): $(OBJS)
	@printf "%-42b" "$(BLUE)linking... $(PURPLE)$(@F)$(RESET)\n"
	@$(AR) $(ARFLAGS) $@ $^

fclean: banner clean
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(NAME)

clean: banner
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(OBJDIR)

re:    fclean all

.PHONY: all banner clean fclean re
