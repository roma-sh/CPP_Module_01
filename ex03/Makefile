# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 19:43:27 by rshatra           #+#    #+#              #
#    Updated: 2024/09/06 20:31:08 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = HumanA.cpp HumanB.cpp main.cpp weapon.cpp

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

