# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 16:47:26 by elerazo-          #+#    #+#              #
#    Updated: 2024/11/15 17:02:48 by elerazo-         ###   ########.fr        #
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

define compile
printf "%b" "$(BLUE)$(2) $(PURPLE)$(@F)$(RESET)\r"; \
OUTPUT=$$($(1) 2>&1); \
RESULT=$$?; \
printf "%b" "$(BLUE)$(2) $(RESET)"; \
if [ $$RESULT -ne 0 ]; then \
  printf "%-42b%b" "$(PURPLE)$(@)" "$(RED)✘$(RESET)\n$(OUTPUT)"; \
else  \
  printf "%-42b%b" "$(PURPLE)$(@F)" "$(GREEN)✓$(RESET)\n"; \
fi; \
exit $$RESULT
endef

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
	@$(call compile,$(CC) $(CFLAGS) -c $< -o $@,compiling...)

$(OBJDIR):
	@-mkdir $(OBJDIR)

$(NAME): $(OBJS)
	@$(call compile,$(AR) $(ARFLAGS) $@ $^,linking...)

fclean: banner clean
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(NAME)

clean: banner
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@rm -rf $(OBJDIR)

re:    fclean all

.PHONY: all banner clean fclean re
