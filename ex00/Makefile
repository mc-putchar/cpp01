# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 02:14:51 by mcutura           #+#    #+#              #
#    Updated: 2023/07/18 18:58:36 by mcutura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Targets ---
NAME := brainz
# --- Sources ---
SRCS := Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
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