# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manugarciasanchez <manugarciasanchez@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:23:15 by mangarci          #+#    #+#              #
#    Updated: 2021/12/02 19:51:49 by manugarcias      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS_DIR = srcs/
SRCS = $(wildcard $(SRCS_DIR)*.c)
OBJS = $(SRCS:%.c=%.o)
LIBFT_PATH = lib/libft
LIBFT_LIB = -L$(LIBFT_PATH) $(LIBFT_PATH)/libft.a
RM = rm -rfv
DEBUG_FLAG = -g

all:	libft $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT_LIB)

$(%.o): $(%.c)
		$(CC) -c $^-o $@
		@echo "Creating objects"

libft:
		make -C $(LIBFT_PATH)

debug: $(OBJS)
	$(CC) $(DEBUG_FLAG) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		@echo "Removing objects"
		$(RM) $(OBJS)

fclean:
		make clean
		cd lib/libft && $(MAKE) fclean
		$(RM) $(NAME)

re: 
	make fclean all
	@echo "All files had been removed and recompiled"

.PHONY: clean fclean all re objects debug bonus
