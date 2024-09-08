# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 13:45:28 by rshatra           #+#    #+#              #
#    Updated: 2024/09/08 15:56:43 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

