# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 00:56:14 by mcutura           #+#    #+#              #
#    Updated: 2023/07/19 03:26:21 by mcutura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Targets ---
NAME := sed_losers
# --- Sources ---
SRCS := main.cpp
# --- Headers ---
# HDRS := 
# --- Compiler ---
CC := g++
# --- Flags ---
CFLAGS := -Wall -Wextra -Werror -std=c++98 -pedantic-errors
# --- Utils --
RM := rm -rf

# --- Rules ---
all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re