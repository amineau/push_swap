# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amineau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 15:32:27 by amineau           #+#    #+#              #
#    Updated: 2016/03/24 14:13:19 by amineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
CC = gcc 

SRCS = main.c ft_error.c ft_list.c ft_swap.c ft_push.c ft_rotate.c ft_reverse.c\
		ft_stockage.c ft_retour.c ft_insertion.c ft_size_pile.c

LIBPATH = libft
SPATH = srcs
OPATH = objs
HPATH = includes
LFTHPATH = $(LIBPATH)/includes

CFLAGS =-Wall -Werror -Wextra -I./$(HPATH) -I./$(LFTHPATH)
LIBS =-L./$(LIBPATH) -lprt

SRC = $(addprefix $(SPATH)/,$(SRCS))
OBJ = $(addprefix $(OPATH)/,$(SRCS:.c=.o))

WHITE	= \033[0m
DARK	= \033[1;30m
RED		= \033[1;31m
GREENB	= \033[1;32m
GREEN	= \033[0;32m
YELLOW	= \033[33m
CYAN	= \033[36m

all: $(OPATH) $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Compilation Libft$(WHITE)"
	@make -C $(LIBPATH)
	@$(CC) $(CFLAGS) $(LIBS) -o $@ $^ \
	&& printf "$(YELLOW)%-30s$(DARK)-->>\t$(GREEN)$@$(WHITE)\n" "Compilation"\
	|| (printf "$(YELLOW)%-30s$(DARK)-->>\t$(RED)$@$(WHITE)\n" "Compilation" \
	&& exit 1)

$(OPATH):
	@printf "$(YELLOW)%-30s$(WHITE)" "Creating $@ directory"
	@mkdir -p $(OPATH)
	@echo "$(GREENB)<<--$(WHITE)"

$(OPATH)/%.o: $(SPATH)/%.c
	@$(CC) $(CFLAGS) -o $@ -c $< \
	&& printf "%-30s$(DARK)-->>\t$(GREEN)$@$(WHITE)\n" "$<" \
	|| (printf "%-30s$(DARK)-->>\t$(RED)$@$(WHITE)\n" "$<" \
	&& exit 1)

clean:
	@printf "$(YELLOW)%-30s$(WHITE)" "Deleting $(OPATH)"
	@rm -rf $(OPATH)
	@echo "$(GREENB)<<--$(WHITE)"

fclean: clean
	@printf "$(YELLOW)%-30s$(WHITE)" "Deleting $(NAME)"
	@rm -f $(NAME)
	@echo "$(GREENB)<<--$(WHITE)"

libclean: fclean
	@make -C $(LIBPATH) fclean

re: fclean all
