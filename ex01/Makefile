# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 19:03:33 by mcutura           #+#    #+#              #
#    Updated: 2023/07/18 19:04:05 by mcutura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Targets ---
NAME := moar_brainz
# --- Sources ---
SRCS := Zombie.cpp main.cpp zombieHorde.cpp
# --- Headers ---
HDRS := Zombie.hpp
# --- Compiler ---
CC := g++
# --- Flags ---
CFLAGS := -Wall -Wextra -Werror -std=c++98 -pedantic-errors
# --- Utils --
RM := rm -rf

# --- Rules ---
all: $(NAME)

$(NAME): $(HDRS) $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re